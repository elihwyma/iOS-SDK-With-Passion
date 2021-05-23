/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPhotoshopAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)production;
- (_Bool)hasCursorProduction;
- (_Bool)hasProduction;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)_activeProductionWithRenditionsInProductions:(id)arg1;
- (id)_productionWithRenditionsInProductions:(id)arg1;

@end
