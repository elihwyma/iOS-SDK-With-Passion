/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WFDatabaseAccessResourceState : NSObject

{
    NSString *_persistentIdentifier;
    NSData *_perWorkflowStateData;
}

@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) NSData *perWorkflowStateData;

- (id)initWithPersistentIdentifier:(id)arg1 perWorkflowStateData:(id)arg2;

@end
