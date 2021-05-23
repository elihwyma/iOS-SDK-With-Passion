/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableData;

@protocol OS_dispatch_queue;

@interface CKDResponseBodyParser : NSObject

{
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSMutableData *_parserData;
    NSError *_parserError;
    CDUnknownBlockType _objectParsedBlock;
    long long _qualityOfService;
}

@property (retain, nonatomic) NSError *parserError;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain, nonatomic) NSMutableData *parserData;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) CDUnknownBlockType objectParsedBlock;

- (id)initWithQoS:(long long)arg1;
- (void)processData:(id)arg1;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;

@end
