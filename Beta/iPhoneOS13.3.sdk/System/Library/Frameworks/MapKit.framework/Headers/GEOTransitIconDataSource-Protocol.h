/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@protocol GEOTransitIconDataSource <Swift>

@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;

@end
