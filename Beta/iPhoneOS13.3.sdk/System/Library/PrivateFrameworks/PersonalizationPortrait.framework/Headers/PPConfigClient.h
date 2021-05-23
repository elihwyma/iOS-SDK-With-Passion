/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class PPXPCClientHelper;

@interface PPConfigClient : NSObject

{
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)assetVersionWithError:(id *)arg1;
- (id)variantNameWithError:(id *)arg1;

@end
