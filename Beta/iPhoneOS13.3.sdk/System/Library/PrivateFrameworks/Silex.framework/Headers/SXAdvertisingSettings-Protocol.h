/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXAutoPlacementLayout;

@protocol SXAdvertisingSettings <Swift>

@property (nonatomic, readonly) unsigned long long frequency;
@property (nonatomic, readonly) unsigned long long bannerType;
@property (nonatomic, readonly) id <SXAutoPlacementLayout> layout;
@property (nonatomic, readonly) struct _SXConvertibleValue distanceFromMedia;

@end
