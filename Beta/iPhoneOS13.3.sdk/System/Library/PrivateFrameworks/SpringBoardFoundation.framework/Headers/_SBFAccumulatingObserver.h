/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString;

@protocol OS_dispatch_semaphore;

@interface _SBFAccumulatingObserver : NSObject

{
    NSMutableArray *_results;
    NSError *_error;
    _Bool _didComplete;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)waitForResults:(id *)arg1;

@end
