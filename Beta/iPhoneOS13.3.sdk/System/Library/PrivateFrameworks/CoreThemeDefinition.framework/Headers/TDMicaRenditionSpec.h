/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDMicaRenditionSpec : TDRenditionSpec

@property (copy, nonatomic) NSString *layerPath;
@property (nonatomic) _Bool isTintable;

- (id)debugDescription;
- (void)_logError:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logExtra:(id)arg1;

@end
