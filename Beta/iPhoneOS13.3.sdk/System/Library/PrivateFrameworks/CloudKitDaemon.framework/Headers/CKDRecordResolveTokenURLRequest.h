/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

{
    _Bool _shouldFetchRootRecord;
    NSSet *_rootRecordDesiredKeySet;
    CDUnknownBlockType _tokenResolveBlock;
    NSArray *_lookupInfos;
    NSMutableDictionary *_lookupInfosByRequestID;
}

@property (retain, nonatomic) NSArray *lookupInfos;
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) _Bool shouldFetchRootRecord;
@property (copy, nonatomic) CDUnknownBlockType tokenResolveBlock;

- (int)operationType;
- (id)sourceApplicationBundleIdentifier;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithShortTokenLookupInfos:(id)arg1;

@end
