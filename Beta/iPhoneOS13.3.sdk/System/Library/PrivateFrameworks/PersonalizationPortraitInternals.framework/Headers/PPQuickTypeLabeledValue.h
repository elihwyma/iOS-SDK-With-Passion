/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PPQuickTypeLabeledValue : NSObject

{
    unsigned int _fields;
    NSString *_label;
    NSString *_value;
    double _scoreBoost;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) double scoreBoost;
@property (nonatomic, readonly) unsigned int fields;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned int)arg4;

- (id)initWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned int)arg4;

@end
