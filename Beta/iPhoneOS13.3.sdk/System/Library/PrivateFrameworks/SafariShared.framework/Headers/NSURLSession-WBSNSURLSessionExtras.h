/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <CFNetwork/NSURLSession.h>

@interface NSURLSession (WBSNSURLSessionExtras)

+ (id)safari_sharedSession;
+ (id)safari_sharedNonCellularSession;

- (void)safari_downloadImageWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_safari_downloadFirstValidImageWithURLs:(id)arg1 failedURLDownloadsToErrorsDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandlerIncludingErrors:(CDUnknownBlockType)arg2;

@end
