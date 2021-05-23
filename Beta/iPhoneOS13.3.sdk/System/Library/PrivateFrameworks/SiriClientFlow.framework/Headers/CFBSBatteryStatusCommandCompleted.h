/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SABaseCommand.h>

@class NSArray, NSString;

@interface CFBSBatteryStatusCommandCompleted : SABaseCommand

@property (copy, nonatomic) NSArray *batteryStatuses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)command;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
