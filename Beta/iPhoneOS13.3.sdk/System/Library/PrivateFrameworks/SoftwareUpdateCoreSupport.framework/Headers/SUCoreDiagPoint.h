/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface SUCoreDiagPoint : NSObject

{
    long long _trackType;
    NSString *_location;
    NSString *_reason;
    long long _code;
    NSError *_error;
    NSString *_previous;
    NSString *_activity;
    NSString *_next;
    NSString *_param;
}

@property (nonatomic) long long trackType;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *previous;
@property (retain, nonatomic) NSString *activity;
@property (retain, nonatomic) NSString *next;
@property (retain, nonatomic) NSString *param;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (id)typeName;
- (id)_descriptionStandard;
- (id)_initFullySpecified:(long long)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withCode:(long long)arg4 withError:(id)arg5 previous:(id)arg6 next:(id)arg7 activity:(id)arg8 param:(id)arg9;
- (id)_descriptionStateEvent;
- (id)_summaryStateEvent;
- (id)_summaryStandard;
- (id)initOfType:(long long)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withCode:(long long)arg4 withError:(id)arg5;
- (id)initStateEventForFSM:(id)arg1 previousState:(id)arg2 fsmEvent:(id)arg3 nextState:(id)arg4 fsmAction:(id)arg5 eventInfo:(id)arg6;

@end
