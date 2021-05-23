/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigWiredMemory : NSObject

{
    void *_bytes;
    unsigned long long _length;
    unsigned long long _roundedLength;
}

@property (nonatomic, readonly) void *bytes;
@property (nonatomic, readonly) unsigned long long length;

+ (void)initialize;

- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;

@end
