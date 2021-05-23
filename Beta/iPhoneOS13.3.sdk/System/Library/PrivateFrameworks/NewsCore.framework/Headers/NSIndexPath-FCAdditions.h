/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (FCAdditions)

@property (nonatomic, readonly) long long section;
@property (nonatomic, readonly) long long row;
@property (nonatomic, readonly) long long item;

+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;

@end
