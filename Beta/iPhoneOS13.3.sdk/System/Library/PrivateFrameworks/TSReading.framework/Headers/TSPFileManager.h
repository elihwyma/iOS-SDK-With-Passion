/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSPFileManager : NSObject

+ (_Bool)linkFileAtPath:(id)arg1 toPath:(id)arg2;
+ (_Bool)linkOrCopyURL:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 encryptionKey:(id)arg4;
+ (_Bool)linkFileAtURL:(id)arg1 toURL:(id)arg2;
+ (_Bool)linkOrCopyURL:(id)arg1 toURL:(id)arg2;

@end
