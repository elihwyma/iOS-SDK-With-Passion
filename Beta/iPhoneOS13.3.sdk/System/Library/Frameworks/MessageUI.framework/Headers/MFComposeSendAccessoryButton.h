/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIButton.h>

@class UIImage;

@interface MFComposeSendAccessoryButton : UIButton

{
    UIImage *_sendImage;
}

@property (retain, nonatomic) UIImage *sendImage;

+ (id)buttonWithType:(long long)arg1;

- (void)setEnabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setupSendImage:(_Bool)arg1;

@end
