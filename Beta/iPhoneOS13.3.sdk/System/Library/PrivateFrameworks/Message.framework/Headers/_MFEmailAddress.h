/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MFEmailAddress : NSObject

{
    NSString *_address;
    NSString *_comment;
}

@property (copy, nonatomic, readonly) NSString *fullAddress;
@property (copy, nonatomic, readonly) NSString *address;
@property (copy, nonatomic, readonly) NSString *comment;

- (id)initWithAddress:(id)arg1 comment:(id)arg2;

@end
