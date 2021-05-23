/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSessionTask.h>

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask

{
    unsigned long long _AVAssetDownloadToken;
}

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (copy, readonly) NSURL *URL;
@property (copy, readonly) NSURL *destinationURL;

- (void)setURL:(id)arg1;
- (void)setDestinationURL:(id)arg1;

@end
