/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshot : NSObject

{
    _UIDataSourceSnapshotter *_snapshotter;
}

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)initWithDataSourceSnapshotter:(id)arg1;

@end
