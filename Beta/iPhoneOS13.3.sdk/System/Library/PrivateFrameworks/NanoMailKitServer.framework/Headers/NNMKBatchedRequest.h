/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKProtoFetchRequest, NSMutableDictionary;

@interface NNMKBatchedRequest : NSObject

{
    NSMutableDictionary *_messagesToBeSentInBatch;
    NNMKProtoFetchRequest *_latestFetchRequest;
}

@property (retain, nonatomic) NSMutableDictionary *messagesToBeSentInBatch;
@property (retain, nonatomic) NNMKProtoFetchRequest *latestFetchRequest;

- (id)init;
- (id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2;

@end
