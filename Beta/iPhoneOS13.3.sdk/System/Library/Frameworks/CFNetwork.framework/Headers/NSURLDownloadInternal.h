/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSOperationQueue, NSURLAuthenticationChallenge;

@interface NSURLDownloadInternal : NSObject

{
    struct _CFURLDownload *cfDownload;
    struct _CFURLAuthChallenge *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id delegate;
    _Bool downloadActive;
    NSOperationQueue *_targetQueue;
}

- (void)dealloc;

@end
