/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class UITraitCollection;

@protocol SXPresentationEnvironment <Swift>

@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long viewingLocation;

@end
