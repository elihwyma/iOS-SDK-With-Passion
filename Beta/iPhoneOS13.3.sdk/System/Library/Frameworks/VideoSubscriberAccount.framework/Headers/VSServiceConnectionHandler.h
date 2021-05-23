/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol VSServiceConnectionHandlerDelegate;

__attribute__((visibility("hidden")))
@interface VSServiceConnectionHandler : NSObject

{
    NSXPCConnection *_connection;
    id <VSServiceConnectionHandlerDelegate> _delegate;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id <VSServiceConnectionHandlerDelegate> delegate;

- (void)_didFinish;

@end
