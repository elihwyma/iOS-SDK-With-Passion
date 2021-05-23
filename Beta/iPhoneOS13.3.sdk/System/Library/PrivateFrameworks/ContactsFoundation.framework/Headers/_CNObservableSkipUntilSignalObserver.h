/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _CNObservableSkipUntilSignalObserverDelegate;

@interface _CNObservableSkipUntilSignalObserver : NSObject

{
    id <_CNObservableSkipUntilSignalObserverDelegate> _delegate;
}

@property (weak, readonly) id <_CNObservableSkipUntilSignalObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;

@end
