/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFNotificationActionAlert : NSObject

{
    NSString *_title;
    NSString *_body;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *body;

- (id)initWithTitle:(id)arg1 body:(id)arg2;

@end
