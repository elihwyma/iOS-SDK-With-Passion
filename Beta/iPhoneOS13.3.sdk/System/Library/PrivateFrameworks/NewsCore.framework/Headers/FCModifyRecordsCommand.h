/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCModifyRecordsCommand : FCCommand

{
    _Bool _merge;
    CDUnknownBlockType _localRecordsGenerator;
    NSArray *_localRecords;
}

@property (copy, nonatomic) CDUnknownBlockType localRecordsGenerator;
@property (copy, nonatomic) NSArray *localRecords;
@property (nonatomic) _Bool merge;
@property (nonatomic, readonly) NSArray *t_localRecords;

+ (_Bool)supportsSecureCoding;
+ (id)desiredKeys;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithLocalRecords:(id)arg1 merge:(_Bool)arg2;
- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (id)initWithLocalRecordsGenerator:(CDUnknownBlockType)arg1 merge:(_Bool)arg2;
- (void)handleLocalRecordsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4;
- (void)handleBatchOfLocalRecords:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
