/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

@class WKFullScreenWindowController;

__attribute__((visibility("hidden")))
@interface WKFullScreenPlaceholderView : UIView

{
    WKFullScreenWindowController *_parent;
}

@property (weak, nonatomic) WKFullScreenWindowController *parent;

- (void)willMoveToSuperview:(id)arg1;

@end
