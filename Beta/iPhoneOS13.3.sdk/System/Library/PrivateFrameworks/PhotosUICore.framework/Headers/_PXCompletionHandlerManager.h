/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol _PXCompletionHandlerManagerDelegate;

@interface _PXCompletionHandlerManager : NSObject

{
    NSMutableArray *_completionHandlers;
    id <_PXCompletionHandlerManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <_PXCompletionHandlerManagerDelegate> delegate;

- (id)init;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleTimeoutOfCompletionHandler:(CDUnknownBlockType)arg1;
- (void)callCompletionHandlers;

@end
