/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec

{
    NSArray *_allowedValues;
}

@property (nonatomic, readonly) NSArray *allowedValues;

- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2;

@end
