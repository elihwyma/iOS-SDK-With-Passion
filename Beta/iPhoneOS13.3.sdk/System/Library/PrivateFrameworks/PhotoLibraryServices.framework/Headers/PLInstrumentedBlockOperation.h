/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation

{
    _Bool _postambleAdded;
    double _creationTime;
    double _executionStartTime;
    double _executionEndTime;
}

@property (nonatomic) double creationTime;
@property (nonatomic) double executionStartTime;
@property (nonatomic) double executionEndTime;
@property (nonatomic) _Bool postambleAdded;
@property (nonatomic, readonly) double timeSpentWaitingInQueue;
@property (nonatomic, readonly) double executionTime;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (id)description;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;

@end
