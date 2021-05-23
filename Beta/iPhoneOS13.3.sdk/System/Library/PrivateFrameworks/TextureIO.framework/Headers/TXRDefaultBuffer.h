/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface TXRDefaultBuffer : NSObject

{
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 zone:(struct _NSZone *)arg2;

@end
