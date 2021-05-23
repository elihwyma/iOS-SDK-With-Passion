/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UILabel.h>

@class NSURL;

@interface PrefsUILinkLabel : UILabel

{
    NSURL *_url;
    _Bool _touchingURL;
    NSURL *_URL;
    id _target;
    SEL _action;
}

@property (retain, nonatomic) NSURL *URL;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void)openURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tappedLink:(id)arg1;
- (id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2;

@end
