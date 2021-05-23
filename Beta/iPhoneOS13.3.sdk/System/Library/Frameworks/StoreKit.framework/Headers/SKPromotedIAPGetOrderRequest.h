/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString;

@interface SKPromotedIAPGetOrderRequest

{
    CDUnknownBlockType _completionHandler;
    NSString *_bundleId;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleReply:(id)arg1;
- (id)initWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
