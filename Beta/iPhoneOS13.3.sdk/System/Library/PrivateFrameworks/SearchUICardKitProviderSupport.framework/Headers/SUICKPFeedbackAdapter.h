/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <NSObject.h>

@class NSString;

@protocol CRKFeedbackDelegate;

@interface SUICKPFeedbackAdapter : NSObject

{
    id <CRKFeedbackDelegate> _feedbackDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CRKFeedbackDelegate> feedbackDelegate;

- (void)presentViewController:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)willDismissViewController:(id)arg1;
- (id)feedbackListener;
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;
- (void)presentViewControllerForCard:(id)arg1 animate:(_Bool)arg2;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;

@end
