/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATTaskClient, NSString;

@interface CRKTaskClientBackedRequestPerformer : NSObject

{
    CATTaskClient *_taskClient;
}

@property (nonatomic, readonly) CATTaskClient *taskClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)operationForRequest:(id)arg1;
- (id)initWithTaskClient:(id)arg1;

@end
