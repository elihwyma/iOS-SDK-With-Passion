/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class FLFollowUpController, FLItemChangeObserver, NSString;

@interface FLTopLevelViewModel : NSObject

{
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
    NSString *_bundleIdentifier;
    NSString *_localizedDeviceRowTitle;
}

@property (copy, nonatomic) NSString *localizedDeviceRowTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_prefixFromBundleIdentifier:(id)arg1;
+ (id)redirectURLForItem:(id)arg1 withAction:(id)arg2;

- (id)initWithIdentifier:(id)arg1;
- (id)groups;
- (id)allPendingItems;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;
- (void)refreshItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBundleIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 controller:(id)arg2;
- (id)extensionToItemMapFromItems:(id)arg1;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mapItemsToGroups:(id)arg1;
- (_Bool)allPendingItemsContains:(id)arg1;

@end
