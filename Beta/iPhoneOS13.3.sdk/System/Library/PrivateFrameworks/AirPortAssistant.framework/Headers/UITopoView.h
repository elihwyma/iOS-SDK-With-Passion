/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <UIKit/UIView.h>

@class NetTopoMiniStaticLayout;

@interface UITopoView : UIView

{
    NetTopoMiniStaticLayout *netTopoMiniStaticLayout;
}

@property (retain, nonatomic) NetTopoMiniStaticLayout *netTopoMiniStaticLayout;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end
