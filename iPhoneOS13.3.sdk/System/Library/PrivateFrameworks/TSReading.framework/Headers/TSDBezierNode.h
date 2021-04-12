//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDBezierNode : NSObject
{
    CGPoint mIn;
    CGPoint mNode;
    CGPoint mOut;
    int mReflectedState;
    BOOL mSelected;
    int mType;
}

+ (id)bezierNodeWithPoint:(CGPoint)arg1 inControlPoint:(CGPoint)arg2 outControlPoint:(CGPoint)arg3;
+ (id)bezierNodeWithPoint:(CGPoint)arg1;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=mSelected;
@property(nonatomic) int type; // @synthesize type=mType;
@property(nonatomic) int reflectedState; // @synthesize reflectedState=mReflectedState;
@property(nonatomic) CGPoint outControlPoint; // @synthesize outControlPoint=mOut;
@property(nonatomic) CGPoint inControlPoint; // @synthesize inControlPoint=mIn;
@property(nonatomic) CGPoint nodePoint; // @synthesize nodePoint=mNode;
- (id)description;
- (id)typeString;
- (id)reflectedStateString;
- (BOOL)underPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long )arg4;
- (void)transformUsingAffineTransform:(CGAffineTransform)arg1;
- (void)swapControlPoints;
- (void)updateReflectedState;
@property(readonly, nonatomic) BOOL isCollapsed;
- (void)collapse;
- (void)setInControlPointFromReflection:(CGPoint)arg1 constrain:(BOOL)arg2;
- (void)setOutControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3;
- (void)setInControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3;
- (void)moveToPoint:(CGPoint)arg1;
- (void)setNode:(CGPoint)arg1;
- (void)balanceControlPoints;
// - (id)copyWithZone:(_NSZone )arg1;

@end

