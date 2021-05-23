/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject

{
    _Bool _shouldBatchSaveRecords;
    _Bool _shouldUseLongLivedOperationsToSaveRecords;
    NSString *_singleDeviceSaveChangesThrottlingPolicyString;
    NSString *_multipleDeviceSaveChangesThrottlingPolicyString;
    NSString *_singleDeviceFetchChangesThrottlingPolicyString;
    NSString *_multipleDeviceFetchChangesThrottlingPolicyString;
    NSString *_syncCircleSizeRetrievalThrottlingPolicyString;
    unsigned long long _maximumRequestCharacterCount;
    double _syncWindow;
}

@property (retain) NSString *singleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *singleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString;
@property unsigned long long maximumRequestCharacterCount;
@property double syncWindow;
@property (readonly) _Bool shouldBatchSaveRecords;
@property (readonly) _Bool shouldUseLongLivedOperationsToSaveRecords;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_builtInConfiguration;
- (void)_applyBuiltInConfiguration:(id)arg1;
- (id)remoteConfiguration;
- (void)applyRemoteConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)_sharedBuiltInConfiguration;
- (id)platformBuiltInConfiguration;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;

@end
