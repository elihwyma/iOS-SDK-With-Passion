/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFormat, BWNodeOutput, BWPixelBufferPool, BWVideoFormat, NSString;

@interface BWNodeOutputMediaProperties : NSObject

{
    NSString *_associatedAttachedMediaKey;
    BWNodeOutput *_owningNodeOutput;
    BWFormat *_resolvedFormat;
    BWFormat *_liveFormat;
    BWPixelBufferPool *_preparedPixelBufferPool;
    BWPixelBufferPool *_livePixelBufferPool;
    int _preparedPixelBufferPoolSize;
    int _livePixelBufferPoolSize;
    int _resolvedRetainedBufferCount;
    unsigned int _mediaType;
}

@property (retain, nonatomic) BWFormat *liveFormat;
@property (nonatomic, readonly) unsigned int mediaType;
@property (retain, nonatomic) BWFormat *resolvedFormat;
@property (retain, nonatomic) BWPixelBufferPool *preparedPixelBufferPool;
@property (nonatomic) int preparedPixelBufferPoolSize;
@property (retain, nonatomic) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic) int livePixelBufferPoolSize;
@property (nonatomic, readonly) BWVideoFormat *resolvedVideoFormat;
@property (nonatomic) int resolvedRetainedBufferCount;
@property (nonatomic, readonly) BWVideoFormat *liveVideoFormat;

- (void)dealloc;
- (void)_setOwningNodeOutput:(id)arg1 associatedAttachedMediaKey:(id)arg2;
- (void)setNodePreparedPixelBufferPool:(id)arg1;
- (void)setPreparedSharedPixelBufferPool:(id)arg1;

@end
