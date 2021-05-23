/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <Swift>

{
    _Bool _operationDidComplete;
    long long _navigationControllerOperation;
}

@property (nonatomic, readonly) long long navigationControllerOperation;
@property (nonatomic, readonly) _Bool operationDidComplete;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;

@end
