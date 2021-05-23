/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TIKeyboardTouchEvent : NSObject

{
    union {
        long long integerValue;
        struct {
            unsigned int continuousPathState:4;
        } fields;
    } _mask;
    int _stage;
    int _fingerID;
    double _radius;
    double _timestamp;
    long long _pathIndex;
    long long _forcedKeyCode;
    struct CGPoint _location;
}

@property (nonatomic, readonly) int stage;
@property (nonatomic, readonly) struct CGPoint location;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long pathIndex;
@property (nonatomic, readonly) int fingerID;
@property (nonatomic, readonly) long long forcedKeyCode;
@property (nonatomic, readonly) int continuousPathState;

+ (_Bool)supportsSecureCoding;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8;

@end
