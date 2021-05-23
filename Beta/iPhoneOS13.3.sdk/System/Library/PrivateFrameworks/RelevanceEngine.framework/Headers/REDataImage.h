/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REImage.h>

@class NSData;

@interface REDataImage : REImage

{
    NSData *_data;
    double _scale;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) double scale;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;

@end
