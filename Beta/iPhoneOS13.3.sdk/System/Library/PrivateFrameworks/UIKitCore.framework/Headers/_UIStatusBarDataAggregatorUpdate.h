/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIStatusBarDataEntry;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregatorUpdate : NSObject

{
    _Bool _animated;
    _UIStatusBarDataEntry *_entry;
}

@property (retain, nonatomic) _UIStatusBarDataEntry *entry;
@property (nonatomic) _Bool animated;

+ (id)updateWithEntry:(id)arg1;

@end
