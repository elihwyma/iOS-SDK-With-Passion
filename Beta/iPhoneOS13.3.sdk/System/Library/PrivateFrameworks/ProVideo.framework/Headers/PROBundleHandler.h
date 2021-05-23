/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@class NSArray, NSBundle, NSMutableArray, NSMutableDictionary, NSString, PROPlugInFirewall;

@protocol PKPlugIn, PROBundleHandlerDelegate, PROPlugInRegistering, PROVersionedAPIAccess;

@interface PROBundleHandler : NSObject <Swift>

{
    NSBundle *bundle;
    NSMutableArray *plugIns;
    NSMutableDictionary *groups;
    id <PROPlugInRegistering> principalClassInstance;
    struct {
        unsigned int canCreateInstances:1;
        unsigned int askedAboutCreatingInstances:1;
        unsigned int :30;
    } bundleFlags;
    NSArray *requestedProtocols;
    id <PROBundleHandlerDelegate> delegate;
    id <PROVersionedAPIAccess> apiManager;
    PROPlugInFirewall *apiAccessPoint;
    id <PKPlugIn> pluginKitPlug;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (void)reportError:(id)arg1;
- (id)apiForProtocol:(id)arg1;
- (id)apiManager;
- (id)pluginKitPlug;
- (id)plugIns;
- (void)addPlugIn:(id)arg1;
- (void)setAPIManager:(id)arg1;
- (void)setPluginKitPlug:(id)arg1;
- (void)registerPlugIns;
- (id)groupsDictionary;
- (id)plugInGroupWithUUID:(struct __CFUUID *)arg1;
- (void)plugInCouldNotInitialize:(id)arg1;
- (void)plugIn:(id)arg1 didError:(id)arg2;
- (_Bool)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
- (id)apiManagerForPlugInInstances;
- (_Bool)isEqualToBundleHandler:(id)arg1;
- (id)principalClassInstance;
- (_Bool)_plugInHasReservedUUID:(id)arg1;
- (_Bool)isPrincipalClassAvailable;
- (void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2;

@end
