/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSProcessHandle, NSString, SBApplication;

@interface SBLockScreenUnlockRequest : NSObject <Swift>

{
    _Bool _wantsBiometricPresentation;
    _Bool _forceAlertAuthenticationUI;
    _Bool _confirmedNotInPocket;
    int _source;
    int _intent;
    NSString *_name;
    BSProcessHandle *_process;
    SBApplication *_destinationApplication;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (retain, nonatomic) BSProcessHandle *process;
@property (retain, nonatomic) SBApplication *destinationApplication;
@property (nonatomic) _Bool wantsBiometricPresentation;
@property (nonatomic) _Bool forceAlertAuthenticationUI;
@property (nonatomic) _Bool confirmedNotInPocket;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
