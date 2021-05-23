/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIBoundingPath : NSObject <Swift>

{
    id <UICoordinateSpace> _coordinateSpace;
}

@property (weak, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic, readonly) _Bool isNonRectangular;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)initWithCoordinateSpace:(id)arg1;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;
- (struct CGRect)_inscribedRectInBoundingRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3;
- (struct CGRect)_largestInscribedRectInBoundingRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 minimumPadding:(double)arg4;
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingRect:(struct CGRect)arg2 withSize:(double)arg3 minimumPadding:(double)arg4;
- (id)_imageRepresentation;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (_Bool)validateForCoordinateSpace;
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;

@end
