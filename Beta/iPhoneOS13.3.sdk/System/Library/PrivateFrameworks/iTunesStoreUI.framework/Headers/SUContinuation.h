/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@protocol SUContinuationDelegate;

@interface SUContinuation : NSObject

{
    id <SUContinuationDelegate> _delegate;
}

@property (nonatomic) id <SUContinuationDelegate> delegate;

- (void)cancel;
- (void)start;
- (void)sendErrorToDelegate:(id)arg1;
- (void)sendFinishToDelegate;

@end
