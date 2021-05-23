/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSDataCompressor : NSObject

{
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;
    int _operation;
    int _status;
    void *_originalDstBuffer;
    CDUnknownBlockType _dataHandler;
}

- (void)dealloc;
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;
- (id)initWithAlgorithm:(long long)arg1 operation:(int)arg2 dataHandler:(CDUnknownBlockType)arg3;
- (_Bool)processBytes:(char *)arg1 size:(unsigned long long)arg2;
- (_Bool)finishProcessing;

@end
