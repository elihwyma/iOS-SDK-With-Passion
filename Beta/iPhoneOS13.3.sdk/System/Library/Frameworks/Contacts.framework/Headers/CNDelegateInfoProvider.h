/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class FAFamilyCircle, NSArray;

__attribute__((visibility("hidden")))
@interface CNDelegateInfoProvider : NSObject

{
    FAFamilyCircle *_familyCircle;
}

@property (nonatomic, readonly) FAFamilyCircle *familyCircle;
@property (copy, readonly) NSArray *availableScopes;

- (id)init;
- (id)description;
- (id)initWithFamilyCircle:(id)arg1;
- (id)contactStoreWithScope:(id)arg1 error:(id *)arg2;

@end
