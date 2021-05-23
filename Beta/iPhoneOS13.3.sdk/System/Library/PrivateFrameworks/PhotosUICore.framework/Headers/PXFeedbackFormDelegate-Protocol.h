/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXFeedbackFormDelegate <Swift>

- (unsigned short)longTitleText;
- (unsigned short)viewTitleForRadar;
- (unsigned short)negativeFeedbackKeys;
- (unsigned short)positiveFeedbackKeys;
- (unsigned short)shouldDisplaySecondaryFeedbackButtons;
- (unsigned short)userIndicatedLike;
- (unsigned short)userIndicatedDislike;
- (unsigned short)userSentPositiveFeedback:negativeFeedback:customFeedback: /* Error: Ran out of types for this method. */;

@end
