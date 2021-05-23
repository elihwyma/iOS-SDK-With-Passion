/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SSVCookieKey : NSObject

{
    NSNumber *_identifier;
    long long _scope;
}

@property (copy, nonatomic) NSNumber *identifier;
@property (nonatomic) long long scope;

+ (id)keyWithIdentifier:(id)arg1 scope:(long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
