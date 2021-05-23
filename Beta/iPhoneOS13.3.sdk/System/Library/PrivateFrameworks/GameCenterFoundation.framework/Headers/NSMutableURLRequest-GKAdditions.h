/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)

+ (int)hashForPlayerID:(id)arg1;
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;

- (void)setLocale:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setInternal:(_Bool)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
- (void)setGameDescriptor:(id)arg1;
- (void)setStoreMode:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setSAPversion:(id)arg1;

@end
