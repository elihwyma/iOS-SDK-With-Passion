/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaServices/MSVBlockGuard.h>

@interface MRBlockGuard : MSVBlockGuard

- (id)initWithTimeout:(double)arg1 reason:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithTimeout:(double)arg1 reason:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
