/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@interface SBUIRemoteAlertIdleTimerSettings : NSObject

{
    _Bool _disablesWarn;
    _Bool _usesLockScreenRules;
    double _autoLockTimeout;
}

@property (nonatomic) double autoLockTimeout;
@property (nonatomic) _Bool disablesWarn;
@property (nonatomic) _Bool usesLockScreenRules;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
