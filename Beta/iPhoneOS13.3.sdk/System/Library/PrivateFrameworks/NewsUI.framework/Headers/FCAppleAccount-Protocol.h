/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class ACAccount, NSString;

@protocol FCAppleAccount <Swift>

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSString *userStoreFrontID;
@property (nonatomic, readonly) NSString *contentStoreFrontID;
@property (nonatomic, readonly) NSString *primaryLanguageCode;
@property (nonatomic, readonly) _Bool isContentStoreFrontSupported;
@property (nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property (nonatomic, readonly, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property (nonatomic, readonly) NSString *endpointConnectionClientID;
@property (nonatomic, readonly) ACAccount *activeiTunesAccount;

- (unsigned short)loadStoreFrontWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)currentStoreFrontID;
- (unsigned short)iTunesAccountDSID;
- (unsigned short)checkAlliOSDevicesRunningMinimumOSVersion:orInactiveForTimeInterval:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)isUserSignedIntoiTunes;
- (unsigned short)checkAllDevicesRunningMinimumiOSVersion:macOSVersion:orInactiveForTimeInterval:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)iCloudAccountDSID;
- (unsigned short)iTunesAccountName;
- (unsigned short)isPrimaryAccountEmailAddress;

@end
