/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class FMFuture, NSString;

@interface FMPromise : NSObject

{
    FMFuture *_future;
}

@property (readonly) FMFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)finishWithResult:(id)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (id)initWithFuture:(id)arg1;
- (_Bool)finishWithNoResult;

@end
