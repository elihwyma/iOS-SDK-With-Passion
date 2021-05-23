/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString;

@interface SKPromotedIAPGetVisibilityRequest

{
    CDUnknownBlockType _completionHandler;
    NSString *_productId;
    NSString *_bundleId;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithProductId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithProductId:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
