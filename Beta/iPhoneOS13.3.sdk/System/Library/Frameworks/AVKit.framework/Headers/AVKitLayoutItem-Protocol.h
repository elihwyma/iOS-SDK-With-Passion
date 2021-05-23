/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/Swift-Protocol.h>

@class MISSING_TYPE, NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@protocol AVKitLayoutItem <Swift>

@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;

- (MISSING_TYPE *)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)avkit_constraintsFromDimensionAnchorsToSize: /* Error: Ran out of types for this method. */;

@end
