/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSOperation.h>

@class MFContactsSearchManager, NSNumber, NSString;

@interface MFContactsSearchOperation : NSOperation

{
    MFContactsSearchManager *_owner;
    NSNumber *_taskID;
    NSString *_text;
    NSString *_sendingAddress;
}

@property (nonatomic, readonly) MFContactsSearchManager *owner;
@property (nonatomic, readonly) NSNumber *taskID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *sendingAddress;
@property (nonatomic, readonly) unsigned long long type;

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3;

@end
