/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDTextureAsset : TDAsset

{
    int exifOrientation;
}

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) int exifOrientation;

- (void)_logError:(id)arg1;
- (struct CGSize)sourceImageSizeWithDocument:(id)arg1;
- (id)sourceImageWithDocument:(id)arg1;

@end
