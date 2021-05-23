/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand

{
    NSArray *_recordIDs;
}

@property (copy, nonatomic) NSArray *recordIDs;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)handleRecordIDsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4;
- (void)handleBatchOfRecordIDs:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
