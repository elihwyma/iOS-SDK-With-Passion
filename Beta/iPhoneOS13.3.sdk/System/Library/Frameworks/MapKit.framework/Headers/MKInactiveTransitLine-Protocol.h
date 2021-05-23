/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class NSString;

@protocol GEOTransitLine;

@protocol MKInactiveTransitLine <Swift>

@property (nonatomic, readonly) id <GEOTransitLine> line;
@property (nonatomic, readonly) NSString *serviceResumesDescription;

@end
