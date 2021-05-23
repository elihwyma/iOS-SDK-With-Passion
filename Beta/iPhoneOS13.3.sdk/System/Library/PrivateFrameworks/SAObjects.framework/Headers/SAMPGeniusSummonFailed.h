/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <Swift>

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)geniusSummonFailed;
+ (id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummonFailedWithErrorCode:(long long)arg1;
+ (id)geniusSummonFailedWithReason:(id)arg1;

- (id)groupIdentifier;
- (id)initWithReason:(id)arg1;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)arg1;
- (_Bool)requiresResponse;

@end
