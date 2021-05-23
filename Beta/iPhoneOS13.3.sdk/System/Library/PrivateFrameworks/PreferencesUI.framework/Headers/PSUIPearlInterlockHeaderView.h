/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <UIKit/UIView.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface PSUIPearlInterlockHeaderView : UIView

{
    NSURL *_interlockURL;
}

@property (retain, nonatomic) NSURL *interlockURL;

- (id)initWithFrame:(struct CGRect)arg1;
- (double)heightForWidth:(double)arg1;

@end
