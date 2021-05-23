/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSURL, UILabel;

@interface _SFURLTextPreviewView : UIView

{
    UILabel *_domainLabel;
    UILabel *_urlLabel;
    NSURL *_URL;
}

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)arg1;
- (void)layoutSubviews;

@end
