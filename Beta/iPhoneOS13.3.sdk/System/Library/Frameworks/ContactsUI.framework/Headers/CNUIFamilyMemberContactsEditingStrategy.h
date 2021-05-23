/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberContactsEditingStrategy : NSObject

{
    NSArray *_prohibitedPropertyKeys;
    CDUnknownBlockType _sensitiveDataContactFilter;
}

@property (nonatomic, readonly) NSArray *prohibitedPropertyKeys;
@property (nonatomic, readonly) CDUnknownBlockType sensitiveDataContactFilter;

+ (id)managedContactsStrategy;
+ (id)whitelistedContactsStrategy;

- (id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(CDUnknownBlockType)arg2;

@end
