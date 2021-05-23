/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUCoreSimulateEvent : NSObject

{
    int _count;
    int _startAt;
    int _endAt;
    long long _simAction;
    long long _simTrigger;
    NSString *_moduleName;
    NSString *_identityName;
    NSString *_fsmEvent;
    NSString *_fsmState;
    NSString *_alteration;
}

@property (nonatomic) int count;
@property (nonatomic, readonly) long long simAction;
@property (nonatomic, readonly) long long simTrigger;
@property (retain, nonatomic, readonly) NSString *moduleName;
@property (retain, nonatomic, readonly) NSString *identityName;
@property (retain, nonatomic, readonly) NSString *fsmEvent;
@property (retain, nonatomic, readonly) NSString *fsmState;
@property (retain, nonatomic, readonly) NSString *alteration;
@property (nonatomic, readonly) int startAt;
@property (nonatomic, readonly) int endAt;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (id)_actionName;
- (id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atFunction:(id)arg4 startAt:(int)arg5 endAt:(int)arg6;
- (id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forMachine:(id)arg3 atEvent:(id)arg4 inState:(id)arg5 alteration:(id)arg6 startAt:(int)arg7 endAt:(int)arg8;
- (id)_initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atIdentity:(id)arg4 atEvent:(id)arg5 inState:(id)arg6 alteration:(id)arg7 startAt:(int)arg8 endAt:(int)arg9;
- (id)_descriptionFSM;
- (id)_descriptionStandard;
- (id)_triggerName;

@end
