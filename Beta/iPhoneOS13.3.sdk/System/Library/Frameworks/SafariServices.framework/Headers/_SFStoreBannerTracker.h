/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface _SFStoreBannerTracker : NSObject

{
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedTracker;

- (id)init;
- (void)load;
- (void)clear;
- (void)save;
- (id)filePath;
- (void)isProductBannerBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockProductBanner:(id)arg1;

@end
