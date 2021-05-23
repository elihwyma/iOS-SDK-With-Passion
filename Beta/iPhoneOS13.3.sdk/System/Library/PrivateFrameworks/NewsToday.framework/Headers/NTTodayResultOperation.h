/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsCore/FCOperation.h>

@class NTPBTodayResultOperationInfo;

@protocol FCContentContext, NTReadablePrivateDataStorage;

@interface NTTodayResultOperation : FCOperation

{
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    CDUnknownBlockType _sessionProvider;
    NTPBTodayResultOperationInfo *_operationInfo;
    CDUnknownBlockType _headlineResultCompletionHandler;
}

@property (retain, nonatomic) id <NTReadablePrivateDataStorage> privateDataStorage;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (copy, nonatomic) CDUnknownBlockType sessionProvider;
@property (copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo;
@property (copy, nonatomic) CDUnknownBlockType headlineResultCompletionHandler;

- (id)init;

@end
