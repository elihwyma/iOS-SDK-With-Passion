/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest

{
    NSMutableSet *_mutableConfirmedSuggestions;
    NSMutableSet *_mutableRejectedSuggestions;
}

@property (retain, nonatomic) NSMutableSet *mutableConfirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *mutableRejectedSuggestions;
@property (copy, nonatomic, readonly) NSSet *confirmedSuggestions;
@property (copy, nonatomic, readonly) NSSet *rejectedSuggestions;

- (id)storeIdentifier;
- (void)confirmSuggestion:(id)arg1;
- (void)rejectSuggestion:(id)arg1;

@end
