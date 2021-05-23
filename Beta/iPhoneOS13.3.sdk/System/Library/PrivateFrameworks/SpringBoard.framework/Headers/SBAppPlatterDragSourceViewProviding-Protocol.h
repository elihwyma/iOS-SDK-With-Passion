/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBAppPlatterDragSourceViewProviding <Swift>

@property (nonatomic, getter=isDragging) _Bool dragging;

- (unsigned short)sourceView;
- (unsigned short)initialCornerRadiusConfiguration;
- (unsigned short)initialDiffuseShadowParameters;
- (unsigned short)initialRimShadowParameters;
- (unsigned short)initialDiffuseShadowFilters;
- (unsigned short)initialRimShadowFilters;
- (unsigned short)containerViewForBlurContentView;

@end
