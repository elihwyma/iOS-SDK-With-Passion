/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface FCWebAccessEntry : NSObject

{
    NSString *_email;
    NSString *_purchaseID;
    NSString *_purchaseReceipt;
    NSDate *_lastRetryAttemptTime;
    NSString *_identifier;
    NSString *_tagID;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *purchaseReceipt;
@property (copy, nonatomic) NSDate *lastRetryAttemptTime;

- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastRetryAttemptTime:(id)arg4 email:(id)arg5 purchaseReceipt:(id)arg6;

@end
