/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSArray;

@protocol SXComponent, SXComponentAnchor;

@protocol SXBlueprintMarker <Swift>

@property (nonatomic, readonly) id <SXComponent> leadingComponent;
@property (nonatomic, readonly) id <SXComponent> trailingComponent;
@property (nonatomic, readonly) struct CGPoint approximateLocation;
@property (nonatomic, readonly) NSArray *path;
@property (retain, nonatomic) id <SXComponentAnchor> componentAnchor;

- (unsigned short)isEqualToMarker: /* Error: Ran out of types for this method. */;

@end
