/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIView.h>

@class BPSWatchView, NSString, PBBridgeAssetsManager, UIImageView;

@interface BPSRemoteWatchView : UIView

{
    NSString *_advertisingName;
    PBBridgeAssetsManager *_assetManager;
    BPSWatchView *_watch;
    UIImageView *_watchScreen;
    unsigned long long _style;
}

@property (copy, nonatomic) NSString *advertisingName;
@property (retain, nonatomic) PBBridgeAssetsManager *assetManager;
@property (retain, nonatomic) BPSWatchView *watch;
@property (retain, nonatomic) UIImageView *watchScreen;
@property (nonatomic) unsigned long long style;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAdvertisingName:(id)arg1 andStyle:(unsigned long long)arg2;

@end
