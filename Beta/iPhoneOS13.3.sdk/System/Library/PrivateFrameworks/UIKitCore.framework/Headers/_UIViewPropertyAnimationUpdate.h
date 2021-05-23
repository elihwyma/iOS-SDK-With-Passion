/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSValue;

@interface _UIViewPropertyAnimationUpdate : NSObject

{
    _Bool _additive;
    _Bool _implicit;
    NSString *_propertyName;
    NSValue *_fromValue;
    NSValue *_toValue;
    double _startTime;
    double _duration;
    double _delay;
}

@property (nonatomic, readonly, getter=isImplicit) _Bool implicit;
@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly, getter=isAdditive) _Bool additive;
@property (retain, nonatomic) NSValue *fromValue;
@property (retain, nonatomic) NSValue *toValue;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double delay;

- (id)init;
- (id)initWithPropertyName:(id)arg1 implicit:(_Bool)arg2 additive:(_Bool)arg3;

@end
