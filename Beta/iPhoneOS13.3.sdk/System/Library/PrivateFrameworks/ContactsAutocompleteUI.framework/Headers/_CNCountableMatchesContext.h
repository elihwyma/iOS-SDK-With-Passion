/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _CNCountableMatchesContext : NSObject

{
    NSMutableDictionary *_contactsCount;
    long long _maxCount;
    NSMutableSet *_highestMatches;
}

@property (nonatomic) long long maxCount;
@property (nonatomic, readonly) NSMutableSet *highestMatches;

- (id)init;
- (void)countInstances:(id)arg1 usingPredicate:(CDUnknownBlockType)arg2;

@end
