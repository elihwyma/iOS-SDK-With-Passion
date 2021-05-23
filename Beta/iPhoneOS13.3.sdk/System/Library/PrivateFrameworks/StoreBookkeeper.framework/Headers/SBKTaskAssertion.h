/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSString, SBKProcessAssertion;

__attribute__((visibility("hidden")))
@interface SBKTaskAssertion : NSObject

{
    CDUnknownBlockType _expireHandler;
    NSString *_debugInfo;
    SBKProcessAssertion *_processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1 debugInfo:(id)arg2;
- (void)performExpirationHandler;

@end
