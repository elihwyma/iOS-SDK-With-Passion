/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SXImageRequest : NSObject

{
    _Bool _preserveColorspace;
    NSString *_imageIdentifier;
    NSURL *_URL;
    unsigned long long _qualities;
    CDUnknownBlockType _loadingBlock;
    struct CGSize _size;
}

@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) unsigned long long qualities;
@property (copy, nonatomic) CDUnknownBlockType loadingBlock;
@property (nonatomic, readonly) _Bool preserveColorspace;

- (id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(struct CGSize)arg4 preserveColorspace:(_Bool)arg5 loadingBlock:(CDUnknownBlockType)arg6;

@end
