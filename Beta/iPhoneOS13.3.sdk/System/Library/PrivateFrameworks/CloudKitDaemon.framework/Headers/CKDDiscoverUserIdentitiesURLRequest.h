/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest

{
    _Bool _wantsProtectionInfo;
    CDUnknownBlockType _progressBlock;
    NSArray *_infosToDiscover;
    NSMutableDictionary *_submittedInfos;
}

@property (retain, nonatomic) NSArray *infosToDiscover;
@property (retain, nonatomic) NSMutableDictionary *submittedInfos;
@property (nonatomic) _Bool wantsProtectionInfo;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;

- (int)operationType;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithLookupInfos:(id)arg1;

@end
