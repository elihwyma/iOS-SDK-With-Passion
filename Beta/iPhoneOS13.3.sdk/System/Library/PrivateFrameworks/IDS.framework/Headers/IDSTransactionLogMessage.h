/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString;

@interface IDSTransactionLogMessage : NSObject

{
    NSString *_fromID;
    NSString *_loginID;
    NSString *_accountUniqueID;
    NSString *_serviceName;
}

@property (nonatomic, readonly) NSString *fromID;
@property (nonatomic, readonly) NSString *loginID;
@property (nonatomic, readonly) NSString *accountUniqueID;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)transactionLogMessageFromDictionaryRepresentation:(id)arg1;

- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4;

@end
