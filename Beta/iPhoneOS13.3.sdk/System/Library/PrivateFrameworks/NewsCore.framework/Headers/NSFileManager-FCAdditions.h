/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FCAdditions)

- (_Bool)fc_removeContentsOfDirectoryAtURL:(id)arg1;
- (void)fc_quicklyClearDirectory:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
