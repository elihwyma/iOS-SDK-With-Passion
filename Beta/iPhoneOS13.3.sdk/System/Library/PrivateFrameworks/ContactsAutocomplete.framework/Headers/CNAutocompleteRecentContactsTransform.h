/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CRRecentContactsLibrary, NSArray, NSString;

@interface CNAutocompleteRecentContactsTransform : NSObject

{
    NSString *_priorityDomainForSorting;
    NSString *_sendingAddress;
    NSArray *_otherAddressesAlreadyChosen;
    NSString *_searchString;
    CRRecentContactsLibrary *_library;
}

@property (copy) NSString *priorityDomainForSorting;
@property (copy) NSString *sendingAddress;
@property (copy) NSArray *otherAddressesAlreadyChosen;
@property (copy) NSString *searchString;
@property (retain) CRRecentContactsLibrary *library;

+ (CDUnknownBlockType)resultTransformWithFactory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 library:(id)arg5;
+ (id)autocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 library:(id)arg6;
+ (id)groupAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5;
+ (id)contactAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 completesChosenGroup:(_Bool)arg3;
+ (long long)addressTypeForRecentContact:(id)arg1;
+ (CDUnknownBlockType)transformForRequest:(id)arg1 library:(id)arg2;

@end
