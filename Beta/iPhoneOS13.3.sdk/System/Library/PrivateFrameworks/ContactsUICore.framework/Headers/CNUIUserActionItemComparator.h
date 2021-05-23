/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@interface CNUIUserActionItemComparator : NSObject

+ (CDUnknownBlockType)comparatorWithActionItemGrouping;
+ (CDUnknownBlockType)comparatorWithPreferredLabelsFirst;
+ (CDUnknownBlockType)comparatorWithAlphabeticalOrderByLabel;
+ (CDUnknownBlockType)comparatorWithAlphabeticalOrderByTargetHandle;
+ (id)scoreForUserAction:(id)arg1;

@end
