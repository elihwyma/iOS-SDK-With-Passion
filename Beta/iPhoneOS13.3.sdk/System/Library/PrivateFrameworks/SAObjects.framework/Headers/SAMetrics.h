/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SAMetrics : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSDictionary *eventInformation;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSDictionary *timings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)metrics;
+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (id)_descriptionHint;

@end
