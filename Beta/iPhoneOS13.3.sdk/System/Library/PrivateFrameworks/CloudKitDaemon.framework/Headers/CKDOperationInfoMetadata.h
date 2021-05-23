/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject

{
    CKOperationInfo *_operationInfo;
    NSDate *_lastAttemptDate;
    NSNumber *_retryNumber;
}

@property (retain, nonatomic) CKOperationInfo *operationInfo;
@property (retain, nonatomic) NSDate *lastAttemptDate;
@property (retain, nonatomic) NSNumber *retryNumber;

@end
