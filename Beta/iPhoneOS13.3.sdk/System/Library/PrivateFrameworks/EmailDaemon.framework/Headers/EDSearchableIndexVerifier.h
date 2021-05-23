/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol EDSearchableIndexVerifierDataSource, OS_os_activity;

@interface EDSearchableIndexVerifier : NSObject

{
    id <EDSearchableIndexVerifierDataSource> _dataSource;
    NSObject<OS_os_activity> *_indexVerificationActivity;
}

@property (retain, nonatomic) NSObject<OS_os_activity> *indexVerificationActivity;
@property (weak, nonatomic) id <EDSearchableIndexVerifierDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)log;
+ (id)signpostLog;

- (id)initWithDataSource:(id)arg1;
- (void)verifyDataSamplesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)_failingSamples:(id)arg1 tester:(id)arg2;
- (void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2;
- (id)_verifyDataSamples:(id)arg1;
- (id)_verifySamples:(id)arg1;

@end
