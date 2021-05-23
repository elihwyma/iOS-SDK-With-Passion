/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASendInstrumentation : SABaseCommand <Swift>

@property (copy, nonatomic) NSNumber *eventTransmittedRelativeToBootTimeTimestampNs;
@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property (copy, nonatomic) NSArray *instrumentationBatch;
@property (copy, nonatomic) NSString *payloadVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)sendInstrumentation;
+ (id)sendInstrumentationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
