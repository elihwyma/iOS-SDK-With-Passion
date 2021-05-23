/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivityViewController.h>

@class NSString, UIDocumentInteractionController;

@protocol _UIDICActivityViewControllerDelegate;

@interface _UIDICActivityViewController : UIActivityViewController

{
    _Bool _isPerformingActivity;
    UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *_documentInteractionActivityDelegate;
    unsigned long long _options;
    id <_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegateRetained;
    NSString *_openActivityTargetApplicationIdentifier;
}

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) id <_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained;
@property (nonatomic) _Bool isPerformingActivity;
@property (retain, nonatomic) NSString *openActivityTargetApplicationIdentifier;
@property (weak, nonatomic) UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate;

- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (_Bool)_shouldShowSystemActivityType:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(unsigned long long)arg3;
- (void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(_Bool)arg2 resultItems:(id)arg3 activityError:(id)arg4;
- (_Bool)hidesSystemActivities;

@end
