/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@protocol MTLTexture;

@interface NTKCharacterTexture : NSObject

{
    unsigned int _gid;
    const void *_data;
    int _length;
    id <MTLTexture> _mtlTexture;
}

@property (retain, nonatomic) id <MTLTexture> mtlTexture;
@property (nonatomic) unsigned int gid;
@property (nonatomic, readonly) const void *data;
@property (nonatomic, readonly) int length;

- (id)initWithData:(const void *)arg1 length:(int)arg2;

@end
