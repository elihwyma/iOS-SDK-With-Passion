/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObserver.h>

@interface _EFBlockObserver : EFObserver

{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
}

- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end
