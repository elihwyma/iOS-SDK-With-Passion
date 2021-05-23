/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <Foundation/NSObject.h>

@interface IMTransferEncryptionController : NSObject

+ (id)sharedInstance;

- (void)encryptURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)decryptURL:(id)arg1 key:(id)arg2 outputFileName:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
