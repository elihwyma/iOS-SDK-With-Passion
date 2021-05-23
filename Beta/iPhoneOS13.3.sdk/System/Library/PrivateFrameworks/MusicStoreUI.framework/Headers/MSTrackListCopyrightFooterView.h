/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <UIView.h>

@class NSString;

@interface MSTrackListCopyrightFooterView : UIView

{
    struct CGSize _textSize;
    NSString *_text;
}

@property (retain, nonatomic) NSString *text;

- (void)dealloc;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_textSize;

@end
