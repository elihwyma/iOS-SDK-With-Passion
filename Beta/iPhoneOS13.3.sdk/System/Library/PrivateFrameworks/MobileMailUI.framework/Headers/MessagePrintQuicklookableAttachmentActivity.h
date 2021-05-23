/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIActivity.h>

@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity

{
    UIPrintPageRenderer *_pageRenderer;
}

@property (retain, nonatomic) UIPrintPageRenderer *pageRenderer;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithPrintPageRenderer:(id)arg1;

@end
