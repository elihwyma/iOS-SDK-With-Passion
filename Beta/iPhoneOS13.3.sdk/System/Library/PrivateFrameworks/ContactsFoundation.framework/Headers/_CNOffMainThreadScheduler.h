/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNScheduler;

@interface _CNOffMainThreadScheduler : NSObject

{
    id <CNScheduler> _alreadyOffMainThreadScheduler;
    id <CNScheduler> _needToGetOffMainThreadScheduler;
}

@property (nonatomic, readonly) id <CNScheduler> alreadyOffMainThreadScheduler;
@property (nonatomic, readonly) id <CNScheduler> needToGetOffMainThreadScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double timestamp;

+ (id)os_log;

- (id)init;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithBackgroundScheduler:(id)arg1;

@end
