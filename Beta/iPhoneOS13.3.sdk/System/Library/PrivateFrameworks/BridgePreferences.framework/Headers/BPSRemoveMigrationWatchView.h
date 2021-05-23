/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIView.h>

@class BPSWatchView, NSString, PBBridgeAssetsManager;

@interface BPSRemoveMigrationWatchView : UIView

{
    NSString *_advertisingName;
    PBBridgeAssetsManager *_assetManager;
    BPSWatchView *_watch;
}

@property (copy, nonatomic) NSString *advertisingName;
@property (retain, nonatomic) PBBridgeAssetsManager *assetManager;
@property (retain, nonatomic) BPSWatchView *watch;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
