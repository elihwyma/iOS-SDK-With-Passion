/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFObservable : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)observableWithBlock:(CDUnknownBlockType)arg1;
+ (id)forkJoin:(id)arg1;

- (id)subscribe:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)observeOn:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)generate:(CDUnknownBlockType)arg1;
- (id)waitForResults:(id *)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end
