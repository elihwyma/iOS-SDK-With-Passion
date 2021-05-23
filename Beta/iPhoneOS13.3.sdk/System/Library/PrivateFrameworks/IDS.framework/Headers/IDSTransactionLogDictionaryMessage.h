/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSTransactionLogMessage.h>

@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage

{
    NSDictionary *_dictionaryValue;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;

@end
