/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHImageDecoder : NSObject

+ (id)sharedDecoder;

- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(_Bool)arg5 optimizeForDrawing:(_Bool)arg6 highPriority:(_Bool)arg7 waitUntilComplete:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;

@end
