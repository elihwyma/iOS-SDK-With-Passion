/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class WFContact;

@interface WFContactComposeRecipient : CNComposeRecipient

{
    WFContact *_wfContact;
}

@property (nonatomic, readonly) WFContact *wfContact;

- (id)displayString;
- (id)initWithWFContact:(id)arg1;
- (id)wf_contactFieldEntry;

@end
