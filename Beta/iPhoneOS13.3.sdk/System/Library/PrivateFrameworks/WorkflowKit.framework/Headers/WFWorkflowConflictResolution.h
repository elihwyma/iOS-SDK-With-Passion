/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFWorkflowConflictResolution : NSObject

{
    _Bool _keepLocal;
    _Bool _keepRemote;
    NSString *_localWorkflowID;
    NSString *_remoteWorkflowID;
}

@property (copy, nonatomic) NSString *localWorkflowID;
@property (copy, nonatomic) NSString *remoteWorkflowID;
@property (nonatomic) _Bool keepLocal;
@property (nonatomic) _Bool keepRemote;

- (id)description;

@end
