/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@protocol CKAlertUtilitiesProtocol;

@interface CKAlertUtilities : NSObject

{
    id <CKAlertUtilitiesProtocol> _delegate;
}

@property (weak, nonatomic) id <CKAlertUtilitiesProtocol> delegate;

+ (struct __CFDictionary *)_copyCTPhoneNumberSetting;
+ (struct __CFString *)_grabCTSIMStatus;
+ (long long)missingAlertTypeToNotify;

- (void)_displayMissingInformationAlert:(long long)arg1;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_showNetworkPrefs:(long long)arg1;
- (void)checkMissingCarrierSetting;

@end
