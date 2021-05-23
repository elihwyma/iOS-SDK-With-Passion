/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest

{
    CDUnknownBlockType _completionHandler;
    NSArray *_order;
    NSString *_bundleId;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSArray *order;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
