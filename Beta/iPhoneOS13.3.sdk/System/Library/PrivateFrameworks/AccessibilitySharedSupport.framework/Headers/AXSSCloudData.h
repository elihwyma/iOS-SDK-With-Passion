/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSArray;

@protocol OS_os_transaction;

@interface AXSSCloudData : NSObject

{
    CKServerChangeToken *_serverChangeToken;
    NSArray *_recordsToUpdate;
    NSArray *_recordIDsToDelete;
    NSObject<OS_os_transaction> *_openTransaction;
}

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain, nonatomic) NSArray *recordsToUpdate;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSObject<OS_os_transaction> *openTransaction;

@end
