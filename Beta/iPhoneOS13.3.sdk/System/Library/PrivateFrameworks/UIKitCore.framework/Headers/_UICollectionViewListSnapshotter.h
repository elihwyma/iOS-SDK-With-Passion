/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDataSourceSnapshotter.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListSnapshotter : _UIDataSourceSnapshotter

{
    NSIndexSet *_topSeparators;
    NSIndexSet *_bottomSeparators;
    _Bool _displaysAdditionalSeparators;
}

@property (nonatomic, readonly) _Bool displaysAdditionalSeparators;

+ (id)snapshotWithSectionCountsProvider:(CDUnknownBlockType)arg1 topBottomSeparatorProvider:(CDUnknownBlockType)arg2 displaysAdditionalSeparators:(_Bool)arg3;

- (id)initWithSectionCountsProvider:(CDUnknownBlockType)arg1 topBottomSeparatorProvider:(CDUnknownBlockType)arg2 displaysAdditionalSeparators:(_Bool)arg3;
- (_Bool)hasTopSeparatorInSection:(long long)arg1;
- (_Bool)hasBottomSeparatorInSection:(long long)arg1;

@end
