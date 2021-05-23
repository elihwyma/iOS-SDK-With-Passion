/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions;

@protocol UIScrollViewDelegate;

@protocol _MKInfoCardController <Swift>

@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (weak, nonatomic) id <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double contentAlpha;

+ (unsigned short)headerHeightInMinimalMode;

- (unsigned short)hideTitle: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMaskAlpha:onHeight:withOffset: /* Error: Ran out of types for this method. */;

@end
