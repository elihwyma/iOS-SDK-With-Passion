/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDataAccessor.h>

__attribute__((visibility("hidden")))
@interface IKDataSubscript : IKDataAccessor

{
    long long _subscriptIndex;
}

@property (nonatomic, readonly) long long subscriptIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptIndex:(long long)arg1;

@end
