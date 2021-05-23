/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface SSXPCServerObserver : NSObject

{
    id _observer;
    SEL _selector;
}

@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
