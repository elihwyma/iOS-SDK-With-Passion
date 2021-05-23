/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@interface DOCThumbnailDescriptor : NSObject

{
    _Bool _folded;
    _Bool _interactive;
    double _minimumSize;
    double _scale;
    unsigned long long _style;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double minimumSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly, getter=isFolded) _Bool folded;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 isFolded:(_Bool)arg4 isInteractive:(_Bool)arg5;
- (id)initWithSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 style:(unsigned long long)arg4 isFolded:(_Bool)arg5 isInteractive:(_Bool)arg6;
- (id)initWithScale:(double)arg1 style:(unsigned long long)arg2 isFolded:(_Bool)arg3 isInteractive:(_Bool)arg4;

@end
