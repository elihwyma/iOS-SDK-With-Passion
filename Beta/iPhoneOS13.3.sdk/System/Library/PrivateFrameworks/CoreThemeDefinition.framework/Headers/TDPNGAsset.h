/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset

{
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) _Bool rawData;

- (int)exifOrientation;
- (void)_logError:(id)arg1;
- (unsigned int)fileScaleFactor;
- (struct CGSize)sourceImageSizeWithDocument:(id)arg1;
- (id)sourceImageWithDocument:(id)arg1;
- (void)setFileScaleFactor:(unsigned int)arg1;
- (_Bool)hasCursorProduction;
- (_Bool)hasProduction;

@end
