/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXPresentableMessage : NSObject

{
    NSString *_recipient;
    NSString *_message;
}

@property (copy, nonatomic, readonly) NSString *recipient;
@property (copy, nonatomic, readonly) NSString *message;

- (id)initWithRecipient:(id)arg1 message:(id)arg2;

@end
