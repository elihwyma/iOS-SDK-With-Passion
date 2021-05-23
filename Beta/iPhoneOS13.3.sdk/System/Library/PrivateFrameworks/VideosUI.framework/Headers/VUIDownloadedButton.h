/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIButton.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDownloadedButton : UIButton

{
    VUITextLayout *_textLayout;
}

@property (retain, nonatomic) VUITextLayout *textLayout;

+ (id)downloadedButton;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
