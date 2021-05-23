/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _RWIRelayClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientConnection : NSObject

{
    _Bool _closed;
    _Bool _sleeping;
    id <_RWIRelayClientConnectionDelegate> _delegate;
    NSString *_tag;
}

@property (nonatomic, readonly) id <_RWIRelayClientConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) _Bool sleeping;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)close;
- (void)sendMessage:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)closeInternal;
- (void)_closeAndNotifyDelegate:(_Bool)arg1;
- (void)closeFromConnection;
- (void)dispatchRelayMessage:(id)arg1;

@end
