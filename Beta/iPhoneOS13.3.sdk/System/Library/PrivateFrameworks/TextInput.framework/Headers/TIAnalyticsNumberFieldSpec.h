/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSNumber;

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec

{
    _Bool _isInteger;
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

@property (nonatomic, readonly) _Bool isInteger;
@property (nonatomic, readonly) NSNumber *minValue;
@property (nonatomic, readonly) NSNumber *maxValue;

- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 isInteger:(_Bool)arg2 minValue:(id)arg3 maxValue:(id)arg4;

@end
