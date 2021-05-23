/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, NSURL, UILabel;

@interface UIURLDragPreviewView : UIView

{
    UILabel *_titleLabel;
    UILabel *_urlLabel;
    NSArray *_titleAndUrlConstraints;
    NSArray *_urlOnlyConstraints;
    NSString *_title;
    NSURL *_url;
    NSString *_urlText;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *urlText;

+ (void)initialize;
+ (id)_titleFont;
+ (id)viewWithURL:(id)arg1;
+ (id)viewWithTitle:(id)arg1 URL:(id)arg2;
+ (id)_urlFont;
+ (id)viewWithTitle:(id)arg1 URLText:(id)arg2;
+ (id)viewWithURLText:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
