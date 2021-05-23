/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface PFUbiquityEventLogging : NSObject

{
    NSMutableSet *_logEvents;
    long long _logLevel;
}

@property long long logLevel;

+ (void)initialize;
+ (id)sharedEventLogger;

- (id)init;
- (void)dealloc;
- (void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3;
- (id)createEventTrackingID:(int)arg1;
- (id)createCustomEventTrackingID:(id)arg1;
- (void)beginEvent:(id)arg1;
- (void)logEventData:(id)arg1 message:(id)arg2;
- (void)diagnostic:(id)arg1 message:(id)arg2;
- (void)debug:(id)arg1 message:(id)arg2;
- (void)info:(id)arg1 message:(id)arg2;
- (void)warning:(id)arg1 message:(id)arg2;
- (void)error:(id)arg1 message:(id)arg2;
- (void)fatal:(id)arg1 message:(id)arg2;
- (void)endEvent:(id)arg1;
- (id)incompleteEvents;

@end
