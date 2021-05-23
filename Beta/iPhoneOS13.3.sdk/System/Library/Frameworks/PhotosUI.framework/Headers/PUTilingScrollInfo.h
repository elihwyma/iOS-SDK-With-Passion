/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUTilingScrollInfo : NSObject

{
    _Bool _shouldEnablePaging;
    long long _scrollDirections;
    double _pagingSpringPullAdjustment;
    double _pagingFrictionAdjustment;
    struct CGSize _interpageSpacing;
}

@property (nonatomic, setter=_setScrollDirections:) long long scrollDirections;
@property (nonatomic, setter=_setShouldEnablePaging:) _Bool shouldEnablePaging;
@property (nonatomic, setter=_setInterpageSpacing:) struct CGSize interpageSpacing;
@property (nonatomic, setter=_setPagingSpringPullAdjustment:) double pagingSpringPullAdjustment;
@property (nonatomic, setter=_setPagingFrictionAdjustment:) double pagingFrictionAdjustment;

+ (id)scrollInfoWithScrollDirections:(long long)arg1;
+ (id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(struct CGSize)arg2;
+ (id)scrollInfoWithScrollDirections:(long long)arg1 enabledPagingWithInterpageSpacing:(struct CGSize)arg2 pagingSpringPullAdjustment:(double)arg3 pagingFrictionAdjustment:(double)arg4;

@end
