/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class TDMultisizeImageSetRenditionSpec, TDMultisizeImageSetSizeIndex;

@interface TDMultisizeImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDMultisizeImageSetSizeIndex *sizeIndex;
@property (retain, nonatomic) TDMultisizeImageSetRenditionSpec *multisizeImageSetRendition;

@end
