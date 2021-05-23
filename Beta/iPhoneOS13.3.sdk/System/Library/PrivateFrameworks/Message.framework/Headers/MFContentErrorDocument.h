/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface MFContentErrorDocument : NSObject

{
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *content;

- (id)initWithMimePart:(id)arg1;

@end
