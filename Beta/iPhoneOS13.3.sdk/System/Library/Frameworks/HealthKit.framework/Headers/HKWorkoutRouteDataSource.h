/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKTaskServerProxyProvider, NSString, NSUUID;

@protocol HKWorkoutRouteDataSourceDelegate;

@interface HKWorkoutRouteDataSource : NSObject

{
    id <HKWorkoutRouteDataSourceDelegate> _delegate;
    NSUUID *_identifier;
    NSUUID *_sessionIdentifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (weak, nonatomic) id <HKWorkoutRouteDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)serverIdentifier;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)workoutBuilderDidFinish;
- (void)clientRemote_didUpdateElevation:(id)arg1;
- (void)clientRemote_didUpdateRoute:(id)arg1;
- (void)clientRemote_didUpdateAltitude:(id)arg1;
- (id)initWithWorkoutSession:(id)arg1;

@end
