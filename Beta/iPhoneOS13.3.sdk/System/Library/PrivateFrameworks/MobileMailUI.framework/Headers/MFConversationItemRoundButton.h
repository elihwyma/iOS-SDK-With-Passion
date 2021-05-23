/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface MFConversationItemRoundButton : UIButton

{
    NSString *_imageName;
}

@property (copy, nonatomic) NSString *imageName;

- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setImage;

@end
