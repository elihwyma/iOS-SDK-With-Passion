/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKUIBehaviorNano.h>

__attribute__((visibility("hidden")))
@interface CKUIBehaviorNanoNotifications : CKUIBehaviorNano

- (_Bool)showsBalloonBadges;
- (double)balloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldShowPluginButtons:(_Bool)arg3 shouldShowCharacterCount:(_Bool)arg4 shouldCoverSendButton:(_Bool)arg5;
- (_Bool)shouldLoadInitialViewingMessageCount;
- (_Bool)showsReplyButtonsInTranscript;
- (_Bool)showsBalloonChevron;
- (double)topTranscriptSpace;
- (double)bottomTranscriptSpace;
- (_Bool)shouldUseRotisserieScrolling;
- (double)previewBalloonMaxWidthForBalloonMaxWidth:(double)arg1;
- (_Bool)shouldSizeInitialViewingMessageCount;
- (double)nanoNoteSenderContentSpace;

@end
