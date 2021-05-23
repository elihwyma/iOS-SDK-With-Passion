/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBrowserCell.h>

@class IMBalloonPlugin, UIImageView;

@interface CKBrowserPluginCell : CKBrowserCell

{
    UIImageView *_selectionOutline;
    IMBalloonPlugin *_plugin;
    UIImageView *_browserImage;
}

@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIImageView *browserImage;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (id)iconView;
- (void)setPlugin:(id)arg1 hideShinyStatus:(_Bool)arg2;
- (void)_setImageForPlugin:(id)arg1;
- (void)_updateShinyStatus;

@end
