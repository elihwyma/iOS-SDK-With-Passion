/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TXRDeferredMipmapInfo : NSObject

{
    NSMutableArray *_elements;
}

@property (nonatomic, readonly) NSMutableArray *elements;

- (id)initWithArrayLength:(unsigned long long)arg1 cubemap:(_Bool)arg2;

@end
