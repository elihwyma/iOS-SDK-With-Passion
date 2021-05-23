/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSTransactionLogMessage.h>

@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage

{
    NSData *_dataValue;
}

@property (nonatomic, readonly) NSData *dataValue;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;

@end
