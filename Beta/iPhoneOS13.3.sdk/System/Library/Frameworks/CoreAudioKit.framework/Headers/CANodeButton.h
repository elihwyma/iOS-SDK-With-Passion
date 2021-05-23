/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIButton.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CANodeButton : UIButton

{
    _Bool hasLabel;
    NSURL *_url;
}

@property (retain) NSURL *url;
@property _Bool hasLabel;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;

@end
