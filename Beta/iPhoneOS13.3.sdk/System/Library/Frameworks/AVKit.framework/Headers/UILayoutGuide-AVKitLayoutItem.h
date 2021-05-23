/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UILayoutGuide.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UILayoutGuide (AVKitLayoutItem)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize)arg1;

@end
