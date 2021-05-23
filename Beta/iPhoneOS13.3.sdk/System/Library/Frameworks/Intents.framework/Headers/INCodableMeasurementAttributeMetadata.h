/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSOrderedSet, NSUnit;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata

{
    _Bool _supportsNegativeNumbers;
    NSUnit *_unit;
    NSOrderedSet *_defaultUnits;
    double _defaultValue;
}

@property (retain, nonatomic) NSUnit *unit;
@property (retain, nonatomic) NSOrderedSet *defaultUnits;
@property (nonatomic) double defaultValue;
@property (nonatomic) _Bool supportsNegativeNumbers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (Class)_unitClass;
- (id)_unitWithUnitName:(id)arg1;
- (id)_defaultUnitWithNames:(id)arg1;

@end
