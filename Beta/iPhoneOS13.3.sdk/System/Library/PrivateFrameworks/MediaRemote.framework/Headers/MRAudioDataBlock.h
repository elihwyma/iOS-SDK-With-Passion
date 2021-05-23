/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRAudioBuffer, NSData, _MRAudioDataBlockProtobuf;

__attribute__((visibility("hidden")))
@interface MRAudioDataBlock : NSObject

{
    MRAudioBuffer *_buffer;
    CDStruct_ace97b7a _time;
    float _gain;
}

@property (nonatomic, readonly) MRAudioBuffer *buffer;
@property (nonatomic, readonly) CDStruct_ace97b7a time;
@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) _MRAudioDataBlockProtobuf *protobuf;
@property (nonatomic, readonly) NSData *data;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (void)_parseBuffer:(id)arg1;
- (void)_parseTimestamp:(id)arg1;
- (void)_parseGain:(id)arg1;

@end
