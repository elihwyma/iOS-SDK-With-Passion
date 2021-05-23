/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFLockScreenActionContext : NSObject

{
    NSString *_lockLabel;
    NSString *_shortLockLabel;
    NSString *_unlockDestination;
    CDUnknownBlockType _action;
    NSString *_identifier;
    double _fontSize;
    _Bool _requiresUIUnlock;
    _Bool _deactivateAwayController;
    _Bool _canBypassPinLock;
    _Bool _wantsBiometricPresentation;
    int _source;
    int _intent;
    _Bool _confirmedNotInPocket;
    _Bool _requiresAuthentication;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lockLabel;
@property (retain, nonatomic) NSString *shortLockLabel;
@property (copy, nonatomic) NSString *unlockDestination;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (nonatomic) _Bool requiresUIUnlock;
@property (nonatomic) _Bool deactivateAwayController;
@property (nonatomic) _Bool canBypassPinLock;
@property (nonatomic) _Bool requiresAuthentication;
@property (nonatomic) _Bool wantsBiometricPresentation;
@property (nonatomic) _Bool confirmedNotInPocket;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (nonatomic, readonly) _Bool hasCustomUnlockLabel;

- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(CDUnknownBlockType)arg3 identifier:(id)arg4;

@end
