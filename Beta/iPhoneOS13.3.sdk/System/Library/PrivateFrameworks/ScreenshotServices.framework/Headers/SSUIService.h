/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class SSUIServiceClient;

@interface SSUIService : NSObject

{
    SSUIServiceClient *_client;
}

- (id)init;
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2;
- (void)_runPPTNamed:(id)arg1;

@end
