/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <UIView.h>

@class NSString;

@interface MSTrackListTableHeaderView : UIView

{
    struct CGSize _titleSize;
    NSString *_title;
}

@property (retain, nonatomic) NSString *title;

- (void)dealloc;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;

@end
