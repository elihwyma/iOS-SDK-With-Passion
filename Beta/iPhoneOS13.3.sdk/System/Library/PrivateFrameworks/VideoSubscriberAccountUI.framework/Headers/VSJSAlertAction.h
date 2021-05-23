/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@class JSValue, NSString;

__attribute__((visibility("hidden")))
@interface VSJSAlertAction : IKJSObject

{
    NSString *_title;
    NSString *_style;
    JSValue *_callback;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *style;
@property (retain, nonatomic) JSValue *callback;

- (id)init;

@end
