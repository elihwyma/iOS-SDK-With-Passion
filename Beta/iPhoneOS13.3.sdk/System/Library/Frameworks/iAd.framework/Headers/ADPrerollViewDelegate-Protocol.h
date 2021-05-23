/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/Swift-Protocol.h>

@protocol ADPrerollViewDelegate <Swift>

- (unsigned short)doneButtonPressed;
- (unsigned short)prerollViewRequestsEmbeddedStatus;
- (unsigned short)playButtonPressed;
- (unsigned short)pauseButtonPressed;
- (unsigned short)skipButtonPressed;
- (unsigned short)actionButtonPressed;
- (unsigned short)privacyButtonPressed;

@end
