/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface HSWiFiManager : NSObject

{
    struct __SCPreferences *_wifiPreferences;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _wiFiEnabled;
    _Bool _wiFiAssociated;
}

@property (nonatomic, getter=isWiFiEnabled) _Bool wiFiEnabled;
@property (nonatomic, getter=isWiFiAssociated) _Bool wiFiAssociated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedWiFiManager;

- (id)init;
- (void)dealloc;
- (void)_wifiCallBack:(unsigned int)arg1;
- (id)_processIdentifier;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (_Bool)_getWiFiEnabledFromPrefs;
- (_Bool)_getWiFiAssociated;

@end
