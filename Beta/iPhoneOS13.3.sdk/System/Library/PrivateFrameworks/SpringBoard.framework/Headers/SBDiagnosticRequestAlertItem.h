/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSArray, NSString;

@interface SBDiagnosticRequestAlertItem : SBAlertItem

{
    CDUnknownBlockType _completionBlock;
    NSString *_title;
    NSString *_message;
    NSString *_radarTitle;
    NSString *_radarDescription;
    NSArray *_radarAttachments;
    long long _radarClassification;
    long long _radarReproducibility;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (copy, nonatomic) NSArray *radarAttachments;
@property (nonatomic) long long radarClassification;
@property (nonatomic) long long radarReproducibility;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (_Bool)shouldShowInLockScreen;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
- (id)_yesButtonTitle;
- (void)_fileRadar;
- (id)_noButtonTitle;
- (id)_stringFromClassification:(long long)arg1;
- (id)_stringFromReproducibility:(long long)arg1;

@end
