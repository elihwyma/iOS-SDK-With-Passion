/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@protocol GEOTransitIconDataSource <Swift>

@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;

@end
