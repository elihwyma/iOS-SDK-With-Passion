/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFError, NSString;

@interface MFDAStoreDraftConsumer : NSObject

{
    _Bool _success;
    NSString *_serverId;
    MFError *_error;
}

@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) _Bool success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleResponse:(id)arg1 error:(id)arg2;

@end
