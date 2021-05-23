/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIClientContext;

@interface SKUIStateRestorationContext : NSObject

{
    SKUIClientContext *_clientContext;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;

+ (id)sharedContext;
+ (void)setSharedContext:(id)arg1;

@end
