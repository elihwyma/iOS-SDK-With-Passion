/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject

{
    AFPreferences *_afPreferences;
}

@property (retain, nonatomic) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (id)languageCode;
- (_Bool)dictationIsEnabled;
- (id)initSingleton;
- (void)afPreferencesChanged:(id)arg1;
- (_Bool)suppressDictationOptIn;
- (_Bool)ignoreServerManualEndpointingThreshold;
- (id)manualEndpointingThreshold;
- (long long)dataSharingOptInStatus;
- (_Bool)suppressDataSharingOptIn;
- (id)dictationSLSEnabledLanguages;

@end
