/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainerID, NSError, NSString;

@interface CKAutoBugCaptureMetadata : NSObject

{
    NSString *_procName;
    CKContainerID *_containerID;
    NSError *_errorPayload;
    long long _reason;
}

@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSError *errorPayload;
@property (nonatomic) long long reason;

@end
