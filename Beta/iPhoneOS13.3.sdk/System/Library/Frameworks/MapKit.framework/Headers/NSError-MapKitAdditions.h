/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (MapKitAdditions)

@property (nonatomic, readonly, getter=_mapkit_isCLDenied) _Bool _mapkit_CLDenied;
@property (nonatomic, readonly, getter=_mapkit_isCLLocationUnknown) _Bool _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, getter=_mapkit_isCLHeadingFailure) _Bool _mapkit_CLHeadingFailure;
@property (nonatomic, readonly, getter=_mapkit_isCLErrorNetwork) _Bool _mapkit_CLErrorNetwork;
@property (retain, nonatomic, readonly) NSURL *_mapkit_locationErrorSettingsURL;

+ (id)_errorWithExtensionServiceError:(long long)arg1;

- (id)_mapkit_error;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (_Bool)_mapkit_isDirectionsError;
- (long long)_mapkit_directionsErrorCode;
- (long long)_mapkit_underlyingGEOError;
- (id)_mapkit_transitIncident;

@end
