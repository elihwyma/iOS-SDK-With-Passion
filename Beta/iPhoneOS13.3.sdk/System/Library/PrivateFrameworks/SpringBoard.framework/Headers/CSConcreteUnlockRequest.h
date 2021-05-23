/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSConcreteUnlockRequest : NSObject

{
    _Bool wantsBiometricPresentation;
    _Bool confirmedNotInPocket;
    int source;
    int intent;
    NSString *name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (nonatomic) _Bool wantsBiometricPresentation;
@property (nonatomic) _Bool confirmedNotInPocket;

@end
