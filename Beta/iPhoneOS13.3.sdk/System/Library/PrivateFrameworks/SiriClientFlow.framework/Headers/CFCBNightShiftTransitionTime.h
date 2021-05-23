/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/AceObject.h>

#import <SiriClientFlow/Swift-Protocol.h>

@class NSString;

@interface CFCBNightShiftTransitionTime : AceObject <Swift>

@property (nonatomic) long long hour;
@property (nonatomic) long long minute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftTransitionTime;
+ (id)nightShiftTransitionTimeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
