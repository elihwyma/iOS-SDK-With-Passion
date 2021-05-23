/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface _WKExtrinsicButton : UIButton

{
    struct CGSize _extrinsicContentSize;
}

@property (nonatomic) struct CGSize extrinsicContentSize;

- (struct CGSize)intrinsicContentSize;

@end
