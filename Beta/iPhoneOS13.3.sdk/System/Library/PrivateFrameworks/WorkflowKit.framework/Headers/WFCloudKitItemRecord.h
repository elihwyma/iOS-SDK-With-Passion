/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecord;

@protocol WFCloudKitItem;

@interface WFCloudKitItemRecord : NSObject

{
    CKRecord *_record;
    id <WFCloudKitItem> _item;
}

@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly) id <WFCloudKitItem> item;

- (id)initWithRecord:(id)arg1 item:(id)arg2;

@end
