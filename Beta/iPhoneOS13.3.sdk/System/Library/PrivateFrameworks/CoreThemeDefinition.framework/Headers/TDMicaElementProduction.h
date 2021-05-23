/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDElementProduction.h>

@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction

@property (retain, nonatomic) TDMicaAsset *asset;

- (void)dealloc;
- (id)relativePath;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)baseKeySpec;
- (id)dataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)associatedFileURLWithDocument:(id)arg1;
- (_Bool)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id *)arg3;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;

@end
