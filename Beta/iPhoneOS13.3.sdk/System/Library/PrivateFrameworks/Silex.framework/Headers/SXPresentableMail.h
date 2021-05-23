/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXPresentableMail : NSObject

{
    NSString *_recipient;
    NSString *_subject;
}

@property (nonatomic, readonly) NSString *recipient;
@property (nonatomic, readonly) NSString *subject;

- (id)initWithRecipient:(id)arg1 subject:(id)arg2;

@end
