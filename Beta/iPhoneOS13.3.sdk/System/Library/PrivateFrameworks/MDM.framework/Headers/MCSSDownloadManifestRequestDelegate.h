/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <MDM/MCSSRequestDelegate.h>

@class NSString, SSDownloadManifestRequest, SSDownloadManifestResponse;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate

{
    SSDownloadManifestResponse *_response;
}

@property (retain, nonatomic, readonly) SSDownloadManifestRequest *request;
@property (nonatomic) _Bool shouldHideUserPrompts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instanceWithURLRequest:(id)arg1;

- (void)downloadManifestRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end
