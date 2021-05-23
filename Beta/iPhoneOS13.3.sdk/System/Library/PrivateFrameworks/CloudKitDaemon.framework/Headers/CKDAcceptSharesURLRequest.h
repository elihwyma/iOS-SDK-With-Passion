/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAcceptSharesURLRequest : CKDURLRequest

{
    CDUnknownBlockType _shareAcceptedBlock;
    NSArray *_shareMetadatasToAccept;
    NSMutableDictionary *_shareMetadataByRequestID;
}

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) CDUnknownBlockType shareAcceptedBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithShareMetadatasToAccept:(id)arg1;

@end
