/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UICloudSharingController;

__attribute__((visibility("hidden")))
@interface _UISharingControllerActivityItemSource : NSObject

{
    UICloudSharingController *_viewController;
}

@property (retain, nonatomic) UICloudSharingController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;

@end
