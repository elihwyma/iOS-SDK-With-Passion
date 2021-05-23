/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUAccessoryDebugModuleController;

@protocol HFHomeKitObject;

@interface HUAccessoryDebugViewController : HUItemTableViewController

{
    id <HFHomeKitObject> _homeKitObject;
    HUAccessoryDebugModuleController *_debugModuleController;
}

@property (retain, nonatomic) HUAccessoryDebugModuleController *debugModuleController;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)initWithHomeKitObject:(id)arg1;
- (id)buildItemModuleControllerForModule:(id)arg1;

@end
