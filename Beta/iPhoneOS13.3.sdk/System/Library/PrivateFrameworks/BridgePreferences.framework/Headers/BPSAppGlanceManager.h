/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@class PSListController;

@interface BPSAppGlanceManager : NSObject

{
    PSListController *_listControllerDelegate;
}

@property (weak, nonatomic) PSListController *listControllerDelegate;

- (id)glanceSpecifierForIdentifier:(id)arg1;
- (void)loadSettings;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (id)showsGlance:(id)arg1;
- (void)_logGlanceDescriptions;

@end
