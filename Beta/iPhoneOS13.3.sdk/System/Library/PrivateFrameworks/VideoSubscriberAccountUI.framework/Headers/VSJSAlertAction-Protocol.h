/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class JSValue, NSString;

@protocol VSJSAlertAction <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *style;
@property (retain, nonatomic) JSValue *callback;

- (unsigned short)init;

@end
