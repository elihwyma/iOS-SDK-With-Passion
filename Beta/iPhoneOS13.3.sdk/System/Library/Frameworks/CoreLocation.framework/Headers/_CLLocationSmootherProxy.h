/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocationSmoother, NSString, NSXPCConnection;

@protocol CLLocationSmootherDelegate, OS_dispatch_queue;

@interface _CLLocationSmootherProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    id <CLLocationSmootherDelegate> _delegate;
    CLLocationSmoother *_locationManagerSmoother;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) id <CLLocationSmootherDelegate> delegate;
@property (nonatomic) CLLocationSmoother *locationManagerSmoother;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)createConnection;
- (void)didSmoothLocations:(id)arg1 ofType:(id)arg2;
- (id)initWithCLLocationSmoother:(id)arg1;

@end
