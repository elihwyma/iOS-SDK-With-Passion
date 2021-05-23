/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSString;

@protocol IKAppKeyboardBridge <Swift>

@property (copy, nonatomic, setter=setJSText:) NSString *jsText;
@property (copy, nonatomic, setter=setJSSource:) NSString *jsSource;

@end
