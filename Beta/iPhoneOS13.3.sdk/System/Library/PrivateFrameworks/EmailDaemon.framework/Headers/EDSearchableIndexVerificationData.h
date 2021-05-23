/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface EDSearchableIndexVerificationData : NSObject <Swift>

{
    NSString *_subject;
    NSArray *_toEmailAddresses;
    NSString *_deleted;
    NSNumber *_transactionID;
    NSNumber *_flags;
    NSNumber *_indexedAsEmptySubject;
    NSDate *_dateReceived;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSArray *toEmailAddresses;
@property (copy, nonatomic) NSString *deleted;
@property (retain, nonatomic) NSNumber *transactionID;
@property (retain, nonatomic) NSNumber *flags;
@property (retain, nonatomic) NSNumber *indexedAsEmptySubject;
@property (retain, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
