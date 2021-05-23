/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class NSProgress, NSString;

@interface ICRequestOperation : ICAsyncOperation

{
    CDUnknownBlockType _completionHandler;
    NSProgress *_progress;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)finishWithError:(id)arg1;
- (void)performRequestOnOperationQueue:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
