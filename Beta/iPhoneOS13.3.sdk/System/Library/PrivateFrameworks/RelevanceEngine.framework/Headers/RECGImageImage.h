/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REImage.h>

@interface RECGImageImage : REImage

{
    struct CGImage *_CGImage;
    double _scale;
}

@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) double scale;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2;

@end
