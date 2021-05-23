/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, CKContainerID, NSDate, NSDictionary, NSString;

@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject

{
    _Bool _shouldDefer;
    NSString *_identifier;
    long long _priority;
    unsigned long long _expectedTransferSizeBytes;
    NSDate *_earliestStartDate;
    CKContainer *_container;
    CKContainerID *_containerID;
    NSDictionary *_additionalXPCActivityCriteria;
    NSObject<OS_xpc_object> *_xpcActivity;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainerID *containerID;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *additionalXPCActivityCriteria;
@property (nonatomic) _Bool shouldDefer;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;
@property (nonatomic) unsigned long long expectedTransferSizeBytes;
@property (copy, nonatomic) NSDate *earliestStartDate;

- (id)description;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3;

@end
