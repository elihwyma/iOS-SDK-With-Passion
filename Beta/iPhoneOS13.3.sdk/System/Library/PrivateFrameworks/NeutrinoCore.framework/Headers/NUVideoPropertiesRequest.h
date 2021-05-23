/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderRequest.h>

@interface NUVideoPropertiesRequest : NURenderRequest

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)submitSynchronous:(out id *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
