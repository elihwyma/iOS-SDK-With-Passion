/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMovieProvider.h>

@class MiroMovie, NSSet;

@interface PXMiroMovieProvider : PXMovieProvider

{
    MiroMovie *__miroMovie;
}

@property (retain, nonatomic, setter=_setMiroMovie:) MiroMovie *_miroMovie;
@property (nonatomic, readonly) NSSet *defaultAssets;

+ (void)initialize;
+ (void *)_loadMiroFrameworkIfNeeded;
+ (void)preloadMiroFrameworkIfNeeded;

- (id)movieViewController;
- (_Bool)canPlayMovie;
- (id)diagnosticsItemProvider;
- (_Bool)ppt_runTest:(id)arg1 options:(id)arg2;
- (Class)_miroMovieClass;
- (id)miroMovie:(id)arg1 createAndNavigateToMemoryFromCollection:(id)arg2;
- (void)_navigateToMemory:(id)arg1;

@end
