/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIActivity.h>

@protocol ContentRepresentationHandlingDelegate;

@interface MessageMarkupDocumentActivity : UIActivity

{
    id <ContentRepresentationHandlingDelegate> _delegate;
    long long _context;
}

@property (weak, nonatomic) id <ContentRepresentationHandlingDelegate> delegate;
@property (nonatomic) long long context;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;

@end
