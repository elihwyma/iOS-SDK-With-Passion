/*
 Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

#import <SAObjects/SAIntentGroupGetAppInfo.h>

@interface SAIntentGroupGetAppInfo (INSExtensionService)

- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (void)ins_getAppInfoForSiriLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_searchLocallyWithAppIdentifyingInfo:(id)arg1 forSiriLanguageCode:(id)arg2;
- (void)_searchAppStoreWithAppIdentifyingInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createOrderedAppInfoListFromDictionary:(id)arg1;

@end
