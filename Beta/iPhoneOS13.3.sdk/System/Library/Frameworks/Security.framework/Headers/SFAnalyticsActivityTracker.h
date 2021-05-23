/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface SFAnalyticsActivityTracker : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    Class _clientClass;
    unsigned long long _start;
    _Bool _canceled;
    NSNumber *_measurement;
}

@property (retain) NSNumber *measurement;

- (void)dealloc;
- (void)cancel;
- (void)stop;
- (void)start;
- (id)initWithName:(id)arg1 clientClass:(Class)arg2;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)stopWithEvent:(id)arg1 result:(id)arg2;

@end
