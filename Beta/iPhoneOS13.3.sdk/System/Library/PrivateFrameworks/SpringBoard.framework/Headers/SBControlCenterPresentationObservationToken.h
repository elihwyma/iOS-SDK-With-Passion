/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBPresentationObservationToken.h>

@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken

{
    SBControlCenterController *_controlCenterController;
}

@property (nonatomic, readonly) SBControlCenterController *controlCenterController;

- (void)dealloc;
- (long long)state;
- (id)initWithControlCenterController:(id)arg1;

@end
