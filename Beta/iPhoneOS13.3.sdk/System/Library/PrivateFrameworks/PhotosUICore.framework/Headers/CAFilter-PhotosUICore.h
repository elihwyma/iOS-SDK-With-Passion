/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <QuartzCore/CAFilter.h>

@interface CAFilter (PhotosUICore)

@property (nonatomic, readonly, getter=px_isSnapshotCompatible) _Bool px_snapshotCompatible;
@property (nonatomic, readonly) _Bool px_supportsAlphaBlending;

+ (id)px_filterWithPXCompositingFilterType:(long long)arg1;

@end
