/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerResizeTaskDescriptor : NSObject <Swift>

{
    NSCountedSet *_cachedAssetsIdentifiersForEstimation;
    unsigned long long _cachedSizeEstimate;
    NSString *_localizedDescription;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) struct CGSize targetSize;
@property (copy, nonatomic, readonly) NSString *localizedDescription;

+ (id)defaultLargeDescriptor;
+ (id)defaultMediumDescriptor;
+ (id)defaultSmallDescriptor;
+ (id)defaultActualSizeDescriptor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocalizedDescription:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)localizedDescriptionForAssets:(id)arg1;
- (id)formattedSizeForAssets:(id)arg1;
- (unsigned long long)estimatedSizeForAssets:(id)arg1;
- (_Bool)appliesToAsset:(id)arg1;

@end
