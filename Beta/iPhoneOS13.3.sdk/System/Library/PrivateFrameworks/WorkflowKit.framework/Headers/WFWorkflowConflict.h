/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject

{
    NSString *_localWorkflowID;
    WFWorkflowRecord *_localWorkflowRecord;
    NSString *_remoteWorkflowID;
    WFWorkflowRecord *_remoteWorkflowRecord;
}

@property (copy, nonatomic) NSString *localWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *localWorkflowRecord;
@property (copy, nonatomic) NSString *remoteWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *remoteWorkflowRecord;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)resolutionKeepingLocal:(_Bool)arg1 keepingRemote:(_Bool)arg2;

@end
