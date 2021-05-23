/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CHSynchronizable : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithName:(const char *)arg1;
- (id)initWithQueue:(id)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;
- (_Bool)executeSyncWithBOOL:(CDUnknownBlockType)arg1;

@end
