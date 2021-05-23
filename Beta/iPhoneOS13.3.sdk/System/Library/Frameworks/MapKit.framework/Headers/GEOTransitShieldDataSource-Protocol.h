/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class NSString;

@protocol GEOTransitShieldDataSource <Swift>

@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldColorString;

@end
