/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIActivity.h>

@class NSArray, UIDocumentInteractionController;

@interface PMOpenInIMovieActivity : UIActivity

{
    UIDocumentInteractionController *_documentInteractionController;
    NSArray *_activityItems;
}

@property (retain, nonatomic) UIDocumentInteractionController *documentInteractionController;
@property (retain, nonatomic) NSArray *activityItems;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)performActivity;

@end
