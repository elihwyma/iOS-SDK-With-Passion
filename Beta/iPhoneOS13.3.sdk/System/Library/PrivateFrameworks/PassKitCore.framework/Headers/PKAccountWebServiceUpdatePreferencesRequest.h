/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServicePreferencesRequest.h>

@class PKAccountPreferences;

@interface PKAccountWebServiceUpdatePreferencesRequest : PKAccountWebServicePreferencesRequest

{
    PKAccountPreferences *_preferences;
}

@property (copy, nonatomic) PKAccountPreferences *preferences;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
