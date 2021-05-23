/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface TIImageCacheItem : NSObject

{
    unsigned char _format;
    double _scale;
    struct CGColor *_formatColor;
    NSData *_data;
    CDUnknownBlockType _dataReleaseHandler;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) unsigned char format;
@property (nonatomic) struct CGColor *formatColor;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) CDUnknownBlockType dataReleaseHandler;

+ (_Bool)supportsSecureCoding;
+ (id)cacheItemWithSize:(struct CGSize)arg1 format:(unsigned char)arg2 formatColor:(struct CGColor *)arg3 scale:(double)arg4 data:(id)arg5 dataReleaseHandler:(CDUnknownBlockType)arg6;
+ (id)cacheItemWithSize:(struct CGSize)arg1 format:(unsigned char)arg2 formatColor:(struct CGColor *)arg3 scale:(double)arg4 data:(id)arg5;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_callDataReleaseHandler;

@end
