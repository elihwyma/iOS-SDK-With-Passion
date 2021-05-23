/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString, WebPolicyDecisionListenerPrivate;

@interface WebPolicyDecisionListener : NSObject

{
    WebPolicyDecisionListenerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void)download;
- (void)use;
- (void)ignore;
- (id)_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_usePolicy:(unsigned char)arg1;

@end
