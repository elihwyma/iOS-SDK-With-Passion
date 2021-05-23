/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <Foundation/NSProgress.h>

@class NSString;

@interface NSProgress (SFAirDropTransferProgressAdditions)

@property (nonatomic, readonly) NSString *sf_publishingKey;
@property (nonatomic, readonly) NSString *sf_bundleID;
@property (nonatomic, readonly) NSString *sf_sessionID;
@property (nonatomic, readonly) NSString *sf_personRealName;
@property (nonatomic) unsigned int sf_initiator;
@property (nonatomic, readonly) NSString *sf_error;
@property (nonatomic) long long sf_transferState;

+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;
+ (id)sf_transferStateAsString:(long long)arg1;

- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
- (id)sf_initWithFileURL:(id)arg1;
- (void)sf_failedWithError:(id)arg1;

@end
