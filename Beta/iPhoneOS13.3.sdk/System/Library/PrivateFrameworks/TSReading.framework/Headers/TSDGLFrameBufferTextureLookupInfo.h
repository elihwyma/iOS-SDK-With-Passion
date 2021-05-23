/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDGLFrameBufferTextureLookupInfo : NSObject

{
    unsigned int _attachment;
    unsigned int _name;
    long long _index;
}

@property (nonatomic, readonly) unsigned int attachment;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) unsigned int name;

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 index:(long long)arg2 name:(unsigned int)arg3;

- (id)initWithAttachment:(unsigned int)arg1 index:(long long)arg2 name:(unsigned int)arg3;

@end
