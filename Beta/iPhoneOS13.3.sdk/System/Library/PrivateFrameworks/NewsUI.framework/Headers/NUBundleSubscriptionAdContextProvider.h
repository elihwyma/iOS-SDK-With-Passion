/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSArray, NSString;

@interface NUBundleSubscriptionAdContextProvider : NSObject <Swift>

{
    _Bool _bundleSubscriber;
    NSArray *_bundleIAPs;
}

@property (nonatomic, readonly, getter=isBundleSubscriber) _Bool bundleSubscriber;
@property (copy, nonatomic) NSArray *bundleIAPs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithBundleSubscriber:(_Bool)arg1 bundleIAPs:(id)arg2;

@end
