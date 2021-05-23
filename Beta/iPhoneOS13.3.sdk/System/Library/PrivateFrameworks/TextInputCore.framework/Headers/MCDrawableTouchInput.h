/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCTouchInput.h>

@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput

{
    _Bool _isInflectionPoint;
    NSArray *_nearbyKeys;
    RefPtr_48eecea7 _touchHistory;
}

@property (nonatomic, readonly) RefPtr_48eecea7 touchHistory;
@property (nonatomic, readonly) _Bool isInflectionPoint;
@property (nonatomic, readonly) NSArray *nearbyKeys;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)initWithTouchPoint:(struct CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3;
- (id)initWithTouchPoint:(struct CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 inflectionPoint:(_Bool)arg4 touchHistory:(const RefPtr_48eecea7 *)arg5;

@end
