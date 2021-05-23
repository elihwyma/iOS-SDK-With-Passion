/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString;

@interface SKPromotedIAPGetInfoInternalRequest

{
    CDUnknownBlockType _completionHandler;
    NSString *_bundleId;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
