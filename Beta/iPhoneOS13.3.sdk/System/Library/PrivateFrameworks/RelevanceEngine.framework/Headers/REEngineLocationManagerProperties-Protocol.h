/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class CLLocation, RELocationManager;

@protocol REEngineLocationManagerProperties <Swift>

@property (readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool monitoringLocation;
@property (nonatomic, readonly) RELocationManager *locationManager;

@end
