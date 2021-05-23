/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderRequest.h>

@interface NUImagePropertiesRequest : NURenderRequest

- (id)submitSynchronous:(out id *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
