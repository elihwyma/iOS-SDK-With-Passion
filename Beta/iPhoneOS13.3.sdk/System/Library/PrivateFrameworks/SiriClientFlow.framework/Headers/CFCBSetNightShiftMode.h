/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/Swift-Protocol.h>

@class CFCBNightShiftSchedule, NSNumber, NSString;

@interface CFCBSetNightShiftMode : SADomainCommand <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *option;
@property (retain, nonatomic) CFCBNightShiftSchedule *schedule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftMode;
+ (id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

@end
