                revs = curr;

            // Store bth node and node after bth node
            if (i == b) {

                revend = curr;

                revend_next = curr->next;
            }

            curr = curr->next;

            i++;
        }

        // Break the link after bth node
        revend->next = nullptr;

        // Reverse the sublist
        revend = reverse(revs);

        // Connect first part with reversed list
        if (revs_prev)
            revs_prev->next = revend;

        else
            head = revend;

        // Connect reversed list with remaining part
        revs->next = revend_next;

        return head;
    }
};