/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface PMLTrainingMock : NSObject

{
    NSMutableArray *_internalCollectedSessions;
    NSMutableDictionary *_lastTrainingFeaturizations;
    NSArray *_collectedSessions;
}

@property (readonly) NSArray *collectedSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)planReceivedWithPayload:(id)arg1 error:(id *)arg2;
- (void)setSourceRecoverer:(CDUnknownBlockType)arg1;
- (void)trimDb;
- (void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(_Bool)arg6;
- (id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(_Bool)arg5;
- (void)clearCollectedSessions;

@end
