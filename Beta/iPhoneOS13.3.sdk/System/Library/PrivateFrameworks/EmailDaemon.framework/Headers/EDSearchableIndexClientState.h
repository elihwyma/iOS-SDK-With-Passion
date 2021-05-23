/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface EDSearchableIndexClientState : NSObject

{
    NSNumber *_transactionValue;
    long long _transaction;
    NSDate *_transactionDate;
    NSString *_systemBuildVersion;
}

@property (nonatomic) long long transaction;
@property (nonatomic, readonly) NSNumber *transactionValue;
@property (retain, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *systemBuildVersion;

+ (id)clientState;
+ (id)clientStateFromData:(id)arg1;
+ (id)transactionAttributeKey;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)archiveRepresentation;
- (void)addTransactionValueToAttributeSet:(id)arg1;

@end
