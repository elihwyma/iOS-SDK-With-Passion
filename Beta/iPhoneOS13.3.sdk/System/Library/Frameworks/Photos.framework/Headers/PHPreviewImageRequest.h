/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImageRequest.h>

@interface PHPreviewImageRequest : PHImageRequest

- (_Bool)isSynchronous;
- (void)startRequest;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;

@end
