/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@protocol VSJSMessagePortDelegate;

__attribute__((visibility("hidden")))
@interface VSJSMessagePort : IKJSObject

{
    id <VSJSMessagePortDelegate> _delegate;
}

@property (weak, nonatomic) id <VSJSMessagePortDelegate> delegate;

- (void)postMessage:(id)arg1;

@end
