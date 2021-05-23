/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString;

@interface SKPromotedIAPSetVisibilityRequest

{
    CDUnknownBlockType _completionHandler;
    long long _visibility;
    NSString *_productId;
    NSString *_bundleId;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithVisibility:(long long)arg1 productId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithVisibility:(long long)arg1 productId:(id)arg2 bundleId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
