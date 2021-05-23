/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@interface MRAVLightweightReconnaissanceSession : NSObject

- (void)searchEndpointsForOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchForOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchForLogicalOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
