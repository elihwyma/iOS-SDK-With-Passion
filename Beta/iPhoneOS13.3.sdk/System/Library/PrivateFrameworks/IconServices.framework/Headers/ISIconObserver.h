/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@protocol ISIconObserverDelegate;

@interface ISIconObserver : NSObject

{
    id _delegate;
}

@property (weak, readonly) id <ISIconObserverDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;

@end
