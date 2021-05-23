/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementGroup : NSObject

{
    NSArray *_placements;
    long long _minimumPriority;
    long long _maximumPriority;
}

@property (copy, nonatomic) NSArray *placements;
@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) long long minimumPriority;
@property (nonatomic, readonly) long long maximumPriority;

+ (id)groupWithPriority:(long long)arg1 placements:(id)arg2;

@end
