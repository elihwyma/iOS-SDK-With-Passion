/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLBuffer;

@interface PKMetalBuffer : NSObject

{
    unsigned long long _lockCount;
    _Atomic int _isPurged;
    id <MTLBuffer> _metalBuffer;
}

@property (nonatomic, readonly) id <MTLBuffer> metalBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)lock;
- (void)unlock;
- (_Bool)isPurged;
- (id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;

@end
