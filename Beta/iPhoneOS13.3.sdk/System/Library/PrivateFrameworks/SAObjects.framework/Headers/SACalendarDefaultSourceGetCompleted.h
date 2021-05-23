/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SACalendarSource;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <Swift>

@property (retain, nonatomic) SACalendarSource *aceCalendarSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (id)initWithAceCalendarSource:(id)arg1;

@end
