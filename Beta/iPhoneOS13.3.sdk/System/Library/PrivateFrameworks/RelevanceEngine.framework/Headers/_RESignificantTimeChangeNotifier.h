/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject

{
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_notify;

@end
