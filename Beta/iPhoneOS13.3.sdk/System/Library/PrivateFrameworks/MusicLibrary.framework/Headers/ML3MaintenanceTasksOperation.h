/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSOperation.h>

@class ML3MusicLibrary, NSObject;

@protocol OS_xpc_object;

@interface ML3MaintenanceTasksOperation : NSOperation

{
    ML3MusicLibrary *_library;
    NSObject<OS_xpc_object> *_activity;
}

@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;

- (void)main;
- (id)initWithLibrary:(id)arg1 activity:(id)arg2;

@end
