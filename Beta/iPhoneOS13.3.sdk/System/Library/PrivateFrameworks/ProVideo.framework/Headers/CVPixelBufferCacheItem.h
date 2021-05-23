/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CVPixelBufferCacheItem : NSObject

{
    NSArray *_buffers;
    NSArray *_DODs;
    struct CGSize _fullSize;
}

@property (nonatomic, readonly) NSArray *buffers;
@property (nonatomic, readonly) NSArray *DODs;
@property (nonatomic, readonly) struct CGSize fullSize;

- (id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(struct CGSize)arg3;

@end
