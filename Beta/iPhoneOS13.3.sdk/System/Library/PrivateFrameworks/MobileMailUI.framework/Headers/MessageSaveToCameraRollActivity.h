/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UISaveToCameraRollActivity.h>

@protocol ContentRepresentationHandlingDelegate;

@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity

{
    id <ContentRepresentationHandlingDelegate> _delegate;
    long long _context;
}

@property (weak, nonatomic) id <ContentRepresentationHandlingDelegate> delegate;
@property (nonatomic) long long context;

- (id)init;
- (id)activityType;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)_beforeActivity;
- (void)_prepareWithActivityItems:(id)arg1;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;

@end
