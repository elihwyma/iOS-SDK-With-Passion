/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSString;

@interface CNAutocompleteDirectoryServerSearch : NSObject

{
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)autocompleteResultsForContacts:(id)arg1 request:(id)arg2;

@end
