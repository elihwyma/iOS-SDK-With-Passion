/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject

{
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (id)queue;
- (id)initWithName:(const char *)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (id)logHandle;
- (id)initWithName:(const char *)arg1 queue:(id)arg2;
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;
- (_Bool)executeSyncWithBOOL:(CDUnknownBlockType)arg1;

@end
