/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUBuffer, NUMutableBuffer;

@interface NUMutableBufferTileAdapter : NSObject

{
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
    id <NUMutableBuffer> _buffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_996ac03c frameRect;
@property (nonatomic, readonly) CDStruct_996ac03c contentRect;
@property (nonatomic, readonly) id <NUBuffer> buffer;
@property (nonatomic, readonly) id <NUMutableBuffer> mutableBuffer;

- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 buffer:(id)arg3;

@end
