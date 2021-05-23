/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteSupplementalGroup : NSObject

{
    NSString *_identifier;
    NSString *_title;
    NSArray *_groupMembers;
}

@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *title;
@property (copy, readonly) NSArray *groupMembers;

- (id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3;

@end
