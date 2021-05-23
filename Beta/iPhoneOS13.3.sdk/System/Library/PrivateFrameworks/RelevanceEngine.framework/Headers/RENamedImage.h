/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REImage.h>

@class NSBundle, NSString;

@interface RENamedImage : REImage

{
    NSString *_name;
    NSBundle *_bundle;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSBundle *bundle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2;

@end
