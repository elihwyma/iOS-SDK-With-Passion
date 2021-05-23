/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (nonatomic) long long colorSpaceID;
@property (nonatomic) double alpha;
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (retain, nonatomic) NSString *systemColorName;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)setColorPropertiesFromCGColor:(struct CGColor *)arg1;

@end
