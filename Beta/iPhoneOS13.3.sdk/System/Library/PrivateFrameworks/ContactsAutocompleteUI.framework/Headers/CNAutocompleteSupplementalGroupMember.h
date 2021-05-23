/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSPersonNameComponents, NSString;

@interface CNAutocompleteSupplementalGroupMember : NSObject

{
    NSString *_address;
    long long _addressType;
    NSPersonNameComponents *_nameComponents;
    NSString *_name;
}

@property (copy, readonly) NSString *address;
@property (readonly) long long addressType;
@property (copy, readonly) NSPersonNameComponents *nameComponents;
@property (copy, readonly) NSString *name;

- (id)initWithNameComponents:(id)arg1 address:(id)arg2 addressType:(long long)arg3;
- (id)initWithName:(id)arg1 address:(id)arg2 addressType:(long long)arg3;

@end
