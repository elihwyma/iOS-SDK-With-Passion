/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudOperation.h>

@class CATOperationQueue;

@interface CRKCloudEncapsulatedOperation : CRKCloudOperation

{
    CATOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) CATOperationQueue *operationQueue;

- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;

@end
