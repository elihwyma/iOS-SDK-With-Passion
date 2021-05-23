/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString;

@protocol NUBuffer;

@interface NUBufferTileAdapter : NSObject <Swift>

{
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
    id <NUBuffer> _buffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_996ac03c frameRect;
@property (nonatomic, readonly) CDStruct_996ac03c contentRect;
@property (nonatomic, readonly) id <NUBuffer> buffer;

- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 buffer:(id)arg3;

@end
