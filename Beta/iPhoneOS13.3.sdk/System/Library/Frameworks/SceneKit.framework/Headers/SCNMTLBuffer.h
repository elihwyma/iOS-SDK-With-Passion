/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLBuffer : NSObject

{
    long long _usedCount;
    id <MTLBuffer> _buffer;
    unsigned long long _offset;
    id _dataSource;
}

@property long long usedCount;
@property (retain, nonatomic) id <MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;
@property (nonatomic, readonly) void *contents;
@property (nonatomic) id dataSource;

- (void)dealloc;
- (long long)decrementUsedCount;
- (void)incrementUsedCount;

@end
