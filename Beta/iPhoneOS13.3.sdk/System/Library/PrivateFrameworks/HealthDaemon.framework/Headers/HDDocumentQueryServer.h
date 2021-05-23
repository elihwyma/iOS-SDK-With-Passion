/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer

{
    _Bool _suspended;
    NSArray *_authorizedSamples;
    unsigned long long _clientSampleIndex;
    _Bool _includeDocumentData;
    unsigned long long _maxResults;
    NSArray *_sortDescriptors;
}

@property (nonatomic, readonly) unsigned long long maxResults;
@property (nonatomic, readonly) NSArray *sortDescriptors;
@property (nonatomic, readonly) _Bool includeDocumentData;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id *)arg3;
- (id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id *)arg2;
- (_Bool)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id *)arg2;
- (void)authorizeSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
