/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString, TDNamedColorProduction;

@interface TDTextStyleRenditionSpec : TDRenditionSpec

@property (nonatomic) short alignment;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic) float maxPointSize;
@property (nonatomic) float minPointSize;
@property (nonatomic) short scalingStyle;
@property (retain, nonatomic) TDNamedColorProduction *backgroundColor;
@property (retain, nonatomic) TDNamedColorProduction *foregroundColor;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
