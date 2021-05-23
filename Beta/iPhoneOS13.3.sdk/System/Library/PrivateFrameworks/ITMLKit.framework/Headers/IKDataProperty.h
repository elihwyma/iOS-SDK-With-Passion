/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDataAccessor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IKDataProperty : IKDataAccessor

{
    NSString *_property;
}

@property (nonatomic, readonly) NSString *property;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperty:(id)arg1;

@end
