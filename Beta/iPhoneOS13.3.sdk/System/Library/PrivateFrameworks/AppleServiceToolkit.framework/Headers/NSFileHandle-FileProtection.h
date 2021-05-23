/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSFileHandle.h>

@interface NSFileHandle (FileProtection)

+ (id)fileHandleForCreatingURL:(id)arg1 protection:(id)arg2 error:(id *)arg3;

- (_Bool)isOpenForUpdating;

@end
