/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSBackgroundActivityScheduler : NSObject

{
    id _private1;
    id _private2;
    id _private3;
    long long _flags;
}

@property (getter=isPreregistered) _Bool preregistered;
@property double delay;
@property CDUnknownBlockType checkInHandler;
@property (getter=_isAppRefresh) _Bool _appRefresh;
@property (copy, readonly) NSString *identifier;
@property long long qualityOfService;
@property _Bool repeats;
@property double interval;
@property double tolerance;
@property (readonly) _Bool shouldDefer;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_updateCriteria:(id)arg1;
- (void)_updateCriteriaForCompletedActivity:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)_setAdditionalXPCActivityProperties:(id)arg1;
- (void)scheduleWithBlock:(CDUnknownBlockType)arg1;

@end
