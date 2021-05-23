/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOLogMsgState, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineStateFactory : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
    NSString *_countryCode;
}

+ (id)sharedFactory;

- (id)init;
- (void)dealloc;
- (id)applicationIdentifier;
- (id)deviceIdentifier;
- (id)suggestions;
- (id)extension;
- (id)route;
- (id)placeRequest;
- (id)deviceConnection;
- (void)deviceCountryChanged:(id)arg1;
- (id)deviceLocale;
- (id)deviceLocaleLimited;
- (id)deviceConnectionLimited;
- (id)deviceSettings_Short;
- (id)carPlay;
- (id)carPlayLimited;
- (id)pairedDevice;
- (id)mapView;
- (id)mapViewLocation;
- (id)mapSettings;
- (id)placeCard;
- (id)mapsServer;
- (id)lookAroundView;
- (id)mapRestore;
- (id)deviceIndentifierInternal;
- (id)mapUI;
- (id)mapUIShown;
- (id)experimentsIncludingABAssignInfo:(_Bool)arg1 includingClientConfig:(_Bool)arg2;
- (id)tileSet;
- (id)lookAroundSummary;
- (id)muninResourceLog;
- (id)deviceSettings_Long;
- (id)_emptyUserSessionState;
- (id)stateForType:(long long)arg1;
- (id)sessionStateForType:(long long)arg1;

@end
