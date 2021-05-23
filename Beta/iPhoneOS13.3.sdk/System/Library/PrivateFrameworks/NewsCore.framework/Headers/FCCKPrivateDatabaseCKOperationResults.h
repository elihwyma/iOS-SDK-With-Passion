/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCThreadSafeMutableArray, NSArray, NSError;

@protocol OS_dispatch_group;

@interface FCCKPrivateDatabaseCKOperationResults : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    FCThreadSafeMutableArray *_threadSafeItems;
    FCThreadSafeMutableArray *_threadSafeErrorsAndItemIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) FCThreadSafeMutableArray *threadSafeItems;
@property (retain, nonatomic) FCThreadSafeMutableArray *threadSafeErrorsAndItemIDs;
@property (nonatomic, readonly) NSArray *combinedResultItems;
@property (nonatomic, readonly) NSError *combinedError;

- (id)init;
- (void)operationWillStart;
- (void)operationDidFinishWithItemIDs:(id)arg1 resultItems:(id)arg2 error:(id)arg3;
- (void)notifyWhenFinishWithQoS:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
