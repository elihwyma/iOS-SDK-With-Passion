/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber;

@interface HAPMetadataCharacteristicValue : HMFObject

{
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
    NSNumber *_minLength;
    NSNumber *_maxLength;
    NSArray *_validValues;
}

@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (retain, nonatomic) NSNumber *stepValue;
@property (retain, nonatomic) NSNumber *minLength;
@property (retain, nonatomic) NSNumber *maxLength;
@property (nonatomic, readonly) NSArray *validValues;

+ (id)initWithDictionary:(id)arg1;

- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithMinLength:(id)arg1 maxLength:(id)arg2;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4;

@end
