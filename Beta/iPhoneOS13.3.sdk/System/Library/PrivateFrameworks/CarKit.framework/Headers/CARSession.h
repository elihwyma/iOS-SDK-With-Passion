/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CARInputDeviceManager, CARObserverHashTable, CARSessionConfiguration, NSData, NSDictionary, NSNumber, NSString;

@protocol CARSessionDelegate;

@interface CARSession : NSObject

{
    struct OpaqueFigEndpoint *_endpoint;
    _Bool _authenticated;
    _Bool _requiresCarCapabilitiesValues;
    int _nightFallbackNotifyToken;
    CARSessionConfiguration *_configuration;
    id <CARSessionDelegate> _sessionDelegate;
    NSData *_MFiCertificateSerialNumber;
    CARInputDeviceManager *_inputDeviceManager;
    NSNumber *_fallbackNightMode;
    CARObserverHashTable *_observers;
}

@property (nonatomic, readonly, getter=isAuthenticated) _Bool authenticated;
@property (weak, nonatomic) id <CARSessionDelegate> sessionDelegate;
@property (copy, nonatomic, readonly) NSData *MFiCertificateSerialNumber;
@property (retain, nonatomic) CARInputDeviceManager *inputDeviceManager;
@property (retain, nonatomic) NSNumber *fallbackNightMode;
@property (nonatomic) int nightFallbackNotifyToken;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (nonatomic) _Bool requiresCarCapabilitiesValues;
@property (nonatomic, readonly) CARSessionConfiguration *configuration;
@property (nonatomic, readonly) _Bool isPaired;
@property (copy, nonatomic, readonly) NSNumber *electronicTollCollectionAvailable;
@property (copy, nonatomic, readonly) NSNumber *nightMode;
@property (copy, nonatomic, readonly) NSNumber *limitUserInterfaces;
@property (copy, nonatomic, readonly) NSDictionary *APEndPointInfo;
@property (copy, nonatomic, readonly) NSString *sourceVersion;

+ (long long)_siriRequestEventForEndpointAction:(id)arg1;

- (void)dealloc;
- (id)description;
- (struct OpaqueFigEndpoint *)endpoint;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setInputMode:(unsigned long long)arg1 forInputDevice:(id)arg2;
- (_Bool)recognizingSpeech;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)_performExtendedEndpointAction:(CDUnknownBlockType)arg1;
- (void)_newObserverAdded:(id)arg1;
- (void)_fetchAuthenticationStatus;
- (void)_updateConfiguration;
- (void)_handleViewAreaChangeWithPayload:(id)arg1;
- (void)_updateScreenInfo:(id)arg1 currentViewAreaToViewArea:(id)arg2 duration:(double)arg3 transitionControlType:(unsigned long long)arg4;
- (void)_fetchFallbackIsNightWithToken:(int)arg1;
- (id)_capabilitiesIdentifier;
- (id)_endpointValueForKey:(struct __CFString *)arg1;
- (id)systemNightMode;
- (void)_setEndpointValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (id)lastNavigatingBundleIdentifier;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1 requiresCarCapabilities:(_Bool)arg2;
- (id)_fig_safe_description;
- (void)_handleOpenURL:(id)arg1;
- (void)_handleSiriRequestEvent:(long long)arg1 withPayload:(id)arg2;
- (void)requestAdjacentViewAreaForScreenID:(id)arg1;
- (void)_handleShowUIWithParameters:(id)arg1;
- (void)_handleStopUIWithParameters:(id)arg1;
- (void)setSiriForwardingEnabled:(_Bool)arg1;
- (_Bool)carOwnsScreen;
- (_Bool)carOwnsMainAudio;
- (unsigned long long)navigationOwner;
- (void)requestTurnByTurnOwnership;
- (void)releaseTurnByTurnOwnership;
- (void)unborrowScreenForToken:(id)arg1;
- (void)suggestUI:(id)arg1;

@end
