/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <Foundation/NSObject.h>

@class NPSManager;

@interface NPHCountryCodeCompanionReplication : NSObject

{
    NPSManager *_npsManager;
}

- (id)init;
- (void)dealloc;
- (void)_updateActiveCountryCode;
- (void)_updateHomeCountryCode;
- (void)_updateNetworkCountryCode;
- (void)_updateAndBroadcastCodeWithKey:(id)arg1 usingFunction:(CDUnknownFunctionPointerType)arg2;

@end
