/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EMMessage;

@interface _EDWrappedMessage : NSObject

{
    EMMessage *_message;
    long long _databaseID;
}

@property (nonatomic, readonly) EMMessage *message;
@property (nonatomic, readonly) long long databaseID;

- (id)initWithMessage:(id)arg1 databaseID:(long long)arg2;

@end
