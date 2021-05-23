/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CCUIAnimationCustomTimingFunctionParameters : NSObject

{
    struct CGPoint _controlPoint1;
    struct CGPoint _controlPoint2;
}

@property (nonatomic, readonly) struct CGPoint controlPoint1;
@property (nonatomic, readonly) struct CGPoint controlPoint2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)functionWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;

@end
