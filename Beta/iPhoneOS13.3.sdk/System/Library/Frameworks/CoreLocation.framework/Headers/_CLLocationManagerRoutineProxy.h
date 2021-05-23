/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocationManagerRoutine, NSString, NSXPCConnection;

@protocol CLLocationManagerDelegate, OS_dispatch_queue;

@interface _CLLocationManagerRoutineProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _updating;
    NSXPCConnection *_connection;
    id <CLLocationManagerDelegate> _delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) id <CLLocationManagerDelegate> delegate;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (nonatomic) _Bool updating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)createConnection;
- (void)didUpdateLocations:(id)arg1;
- (id)initWithQueue:(id)arg1 locationManagerRoutine:(id)arg2;

@end
