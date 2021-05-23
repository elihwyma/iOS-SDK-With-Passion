/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (NAAdditions)

@property (nonatomic, readonly) long long na_row;
@property (nonatomic, readonly) long long na_item;
@property (nonatomic, readonly) long long na_section;

+ (id)na_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)na_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (void)na_each:(CDUnknownBlockType)arg1;
- (id)na_indexPathStartingAtPosition:(unsigned long long)arg1;

@end
