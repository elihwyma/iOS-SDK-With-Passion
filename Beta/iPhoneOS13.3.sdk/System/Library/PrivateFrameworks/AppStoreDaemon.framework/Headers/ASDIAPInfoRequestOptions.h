/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions

{
    NSArray *_adamIds;
}

@property (nonatomic, readonly) NSArray *adamIds;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdamIds:(id)arg1;

@end
