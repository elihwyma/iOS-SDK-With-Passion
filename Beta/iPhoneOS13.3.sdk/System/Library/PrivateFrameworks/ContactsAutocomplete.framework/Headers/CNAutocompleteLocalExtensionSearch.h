/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CLSDataStore, NSString;

@interface CNAutocompleteLocalExtensionSearch : NSObject

{
    CLSDataStore *_dataStore;
}

@property (nonatomic, readonly) CLSDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
