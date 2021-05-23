/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/AceObject.h>

#import <SiriClientFlow/Swift-Protocol.h>

@class CFCBNightShiftTransitionTime, NSString;

@interface CFCBNightShiftSchedule : AceObject <Swift>

@property (retain, nonatomic) CFCBNightShiftTransitionTime *fromTime;
@property (retain, nonatomic) CFCBNightShiftTransitionTime *toTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftSchedule;
+ (id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
