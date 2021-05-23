/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NNMKBatchRequestHandlerResult : NSObject

{
    NSArray *_fetchResults;
    NSArray *_mailboxesToTriggerFullSync;
    NSArray *_missingMessageHeaderIds;
    NSArray *_messageIdsForRequestingContentDownload;
}

@property (retain, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) NSArray *mailboxesToTriggerFullSync;
@property (retain, nonatomic) NSArray *missingMessageHeaderIds;
@property (retain, nonatomic) NSArray *messageIdsForRequestingContentDownload;

@end
