/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLSandboxHelper : NSObject

+ (_Bool)processCanWriteSandboxForPath:(id)arg1;
+ (_Bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (_Bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (_Bool)processCanReadSandboxForPath:(id)arg1;

@end
