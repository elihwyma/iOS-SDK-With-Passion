/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WKConnectionDelegate;

@interface WKConnection : NSObject

{
    struct WeakObjCPtr<id<WKConnectionDelegate>> _delegate;
}

@property id <WKConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (struct WebConnection *)_connection;
- (id).cxx_construct;
- (void)sendMessageWithName:(id)arg1 body:(id)arg2;

@end
