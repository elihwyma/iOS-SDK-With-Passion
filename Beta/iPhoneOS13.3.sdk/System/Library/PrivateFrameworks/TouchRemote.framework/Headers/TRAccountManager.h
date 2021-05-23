/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@interface TRAccountManager : NSObject

+ (id)idmsAccountForAccountService:(unsigned long long)arg1;
+ (id)associatedAccountServicesForIDMSAccount:(id)arg1;
+ (id)_idmsAccountForICloudService;
+ (id)_idmsAccountForITunesService;
+ (id)_idmsAccountForGameCenterService;
+ (id)_primaryICloudAccount;
+ (id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;
+ (id)_primaryITunesAccount;
+ (id)_primaryGameCenterAccount;

@end
