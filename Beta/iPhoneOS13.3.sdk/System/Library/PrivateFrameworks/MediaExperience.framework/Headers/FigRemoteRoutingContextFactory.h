/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FigRemoteRoutingContextFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)createControlChannelOnlyContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemMusicContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createVideoContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemAudioContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemMirroringContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createAudioContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createRemoteMusicControllerContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copyContextForUUIDWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)createPerAppSecondDisplayContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copyDisplayMenuVideoContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;
- (int)copySystemRemotePoolContextWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2 context:(struct OpaqueFigRoutingContext **)arg3;

@end
