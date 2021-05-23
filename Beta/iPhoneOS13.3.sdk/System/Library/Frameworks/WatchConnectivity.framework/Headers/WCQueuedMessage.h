/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <NSObject.h>

@class NSDate, WCMessage;

__attribute__((visibility("hidden")))
@interface WCQueuedMessage : NSObject

{
    WCMessage *_message;
    CDUnknownBlockType _completionHandler;
    NSDate *_creationDate;
    long long _retryCount;
}

@property (retain) WCMessage *message;
@property (copy) CDUnknownBlockType completionHandler;
@property (readonly) NSDate *creationDate;
@property long long retryCount;

- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
