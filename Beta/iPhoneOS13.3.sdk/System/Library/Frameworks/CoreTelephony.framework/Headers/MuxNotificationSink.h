/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSProxy.h>

@class NSString;

@protocol MuxNotificationSinkDelegate;

__attribute__((visibility("hidden")))
@interface MuxNotificationSink : NSProxy

{
    id <MuxNotificationSinkDelegate> _delegate;
}

@property (weak, nonatomic) id <MuxNotificationSinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
