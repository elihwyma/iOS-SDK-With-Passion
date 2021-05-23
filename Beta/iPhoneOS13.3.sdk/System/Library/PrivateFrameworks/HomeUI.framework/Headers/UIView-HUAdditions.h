/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UIView (HUAdditions)

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

+ (void)hu_enableAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;

- (void)hu_setFramePreservingTransform:(struct CGRect)arg1;
- (_Bool)hu_isHomeAffordancePresent;
- (_Bool)hu_isDescendantOfPickerView;
- (void)hu_traverseViewHierarchy:(CDUnknownBlockType)arg1;
- (void)hu_autoSizeByConstrainingWidth:(double)arg1;
- (struct CGPoint)hu_centerInGlobalCoordinateSpace;
- (struct CGRect)hu_frameInGlobalCoordinateSpace;

@end
