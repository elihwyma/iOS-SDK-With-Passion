/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSValue;

__attribute__((visibility("hidden")))
@interface _UIPrototypingValue : NSObject

{
    NSString *_name;
    long long _type;
    NSValue *_defaultValue;
    NSValue *_minimumValue;
    NSValue *_maximumValue;
    NSValue *_currentValue;
    double _stepSize;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSValue *defaultValue;
@property (retain, nonatomic) NSValue *minimumValue;
@property (retain, nonatomic) NSValue *maximumValue;
@property (retain, nonatomic) NSValue *currentValue;
@property (nonatomic) double stepSize;

- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;

@end
