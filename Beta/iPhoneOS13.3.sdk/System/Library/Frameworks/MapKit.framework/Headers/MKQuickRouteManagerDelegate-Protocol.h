/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@protocol MKQuickRouteManagerDelegate <Swift>

- (unsigned short)quickRouteShouldOnlyUseAutomobile;
- (unsigned short)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;

@end
