/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSArray, SXLayoutBlueprint;

@protocol SXComponentController <Swift>

@property (nonatomic, readonly) SXLayoutBlueprint *presentedBlueprint;
@property (nonatomic, readonly) NSArray *flattenedComponentViews;
@property (nonatomic, readonly) _Bool isPresented;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)componentsInRect: /* Error: Ran out of types for this method. */;
- (unsigned short)componentViewForPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)componentViewsForRole: /* Error: Ran out of types for this method. */;
- (unsigned short)componentViewForIdentifier: /* Error: Ran out of types for this method. */;

@end
