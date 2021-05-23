/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSValueTransformer.h>

@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer

{
    long long _groupingOption;
    NSCalendar *_conversionCalendar;
}

@property (nonatomic) long long groupingOption;
@property (retain, nonatomic) NSCalendar *conversionCalendar;

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)initWithGroupingOption:(long long)arg1;

@end
