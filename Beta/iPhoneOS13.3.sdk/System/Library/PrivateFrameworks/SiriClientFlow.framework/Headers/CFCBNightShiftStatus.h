/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/Swift-Protocol.h>

@class CFCBNightShiftSchedule, NSString;

@interface CFCBNightShiftStatus : SADomainCommand <Swift>

@property (nonatomic) _Bool active;
@property (nonatomic) _Bool enabled;
@property (copy, nonatomic) NSString *nightShiftMode;
@property (retain, nonatomic) CFCBNightShiftSchedule *nightShiftSchedule;
@property (nonatomic) _Bool sunSchedulePermitted;
@property (nonatomic) _Bool supported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftStatus;
+ (id)nightShiftStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
