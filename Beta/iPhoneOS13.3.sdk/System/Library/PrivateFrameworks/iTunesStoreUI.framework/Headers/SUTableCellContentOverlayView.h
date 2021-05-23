/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class SUCellConfiguration;

@interface SUTableCellContentOverlayView : UIView

{
    SUCellConfiguration *_configuration;
}

@property (retain, nonatomic) SUCellConfiguration *configuration;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

@end
