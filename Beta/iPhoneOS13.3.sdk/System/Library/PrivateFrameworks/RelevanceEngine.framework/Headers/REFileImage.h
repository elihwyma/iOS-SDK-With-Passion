/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REImage.h>

@class NSString;

@interface REFileImage : REImage

{
    NSString *_path;
    double _scale;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) double scale;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 scale:(double)arg2;

@end
