/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@interface DOCDownloadImportManager : NSObject

- (id)interface;
- (void)importPlaceholderAtURLToDownloadsDirectory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replacePlaceholder:(id)arg1 withFinalFileURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_moveItemAtURLToDownloadsLocation:(id)arg1 error:(id *)arg2;

@end
