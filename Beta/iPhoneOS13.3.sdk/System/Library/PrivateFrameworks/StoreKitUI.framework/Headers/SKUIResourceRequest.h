/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@interface SKUIResourceRequest : NSObject <Swift>

{
    id _cacheKey;
    unsigned long long _requestID;
}

@property (nonatomic, readonly) _Bool cachesInMemory;
@property (retain, nonatomic) id cacheKey;
@property (nonatomic) unsigned long long requestIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishWithResource:(id)arg1;
- (id)newLoadOperation;
- (id)_initSKUIResourceRequest;

@end
