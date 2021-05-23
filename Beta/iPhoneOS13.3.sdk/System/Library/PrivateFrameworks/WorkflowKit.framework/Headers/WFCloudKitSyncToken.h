/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFRecord.h>

@class CKServerChangeToken, NSData, NSDate, NSOrderedSet, NSString;

@interface WFCloudKitSyncToken : WFRecord

{
    NSString *_identifier;
    NSString *_account;
    NSDate *_date;
    NSData *_serverChangeTokenData;
    NSData *_lastOrderingData;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *serverChangeTokenData;
@property (copy, nonatomic) NSData *lastOrderingData;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSOrderedSet *lastOrdering;

+ (id)defaultPropertyValues;

@end
