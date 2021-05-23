/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol UICoordinateSpace;

@interface SBSceneLayoutCoordinateSpace : NSObject <Swift>

{
    id <UICoordinateSpace> _parentCoordinateSpace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect bounds;

+ (id)coordinateSpaceForInterfaceOrientation:(long long)arg1 withReferenceCoordinateSpace:(id)arg2 inOrientation:(long long)arg3;
+ (id)coordinateSpaceForFrame:(struct CGRect)arg1 withinCoordinateSpace:(id)arg2;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)initWithParentCoordinateSpace:(id)arg1;

@end
