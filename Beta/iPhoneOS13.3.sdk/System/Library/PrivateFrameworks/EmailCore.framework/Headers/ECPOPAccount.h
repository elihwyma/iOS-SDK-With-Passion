/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECPOPAccount

@property (nonatomic) long long bigMessageWarningSize;
@property (nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer;
@property (nonatomic, readonly) _Bool daysAfterDownloadToDeleteMessagesFromServerIsSet;
@property (nonatomic) long long deletionPolicy;
@property (nonatomic) _Bool hasNotFinishedFirstTimeSync;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;

@end
