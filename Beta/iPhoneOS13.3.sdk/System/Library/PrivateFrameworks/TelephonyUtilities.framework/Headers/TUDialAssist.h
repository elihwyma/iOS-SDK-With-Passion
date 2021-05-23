/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSString;

__attribute__((visibility("hidden")))
@interface TUDialAssist : NSObject

{
    int _dialAssistUserSettingsChangedToken;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (nonatomic, readonly) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic, readonly) int dialAssistUserSettingsChangedToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)carrierBundleChange:(id)arg1;
- (void)operatorBundleChange:(id)arg1;

@end
