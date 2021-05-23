/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSString, SKXPCConnection;

@interface SKPurchaseIntent : NSObject

{
    NSString *_bundleId;
    NSString *_productIdentifer;
    NSString *_appName;
    NSString *_productName;
    SKXPCConnection *_connection;
    CDUnknownBlockType __completion;
}

@property (copy, nonatomic) CDUnknownBlockType _completion;

- (void)send:(CDUnknownBlockType)arg1;
- (void)_send;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2;

@end
