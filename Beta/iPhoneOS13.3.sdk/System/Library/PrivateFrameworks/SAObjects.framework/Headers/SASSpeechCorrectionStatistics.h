/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <Swift>

@property (nonatomic) long long alternativeSelectCount;
@property (nonatomic) long long characterChangeCount;
@property (copy, nonatomic) NSString *correctionSource;
@property (copy, nonatomic) NSString *correctionText;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
