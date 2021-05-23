/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIActivity.h>

@class NSURL;

@protocol ContentRepresentationHandlingDelegate;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity

{
    id <ContentRepresentationHandlingDelegate> _delegate;
    NSURL *_url;
}

@property (weak, nonatomic) id <ContentRepresentationHandlingDelegate> delegate;
@property (retain, nonatomic) NSURL *url;

- (id)activityType;
- (void)_cleanup;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 url:(id)arg3;

@end
