/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIActivityViewController.h>

@interface MessageActivityViewController : UIActivityViewController

{
    _Bool _sourceIsManaged;
}

@property (nonatomic) _Bool sourceIsManaged;

- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end
