/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSObject, SKUIClientContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUILoadGratisEligibilityOperation : NSOperation

{
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (id)init;
- (void)main;
- (id)_bodyData;
- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;

@end
