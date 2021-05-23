/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject

{
    HKHealthService *_service;
    NSLock *_propertyLock;
    unsigned long long _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _characteristicsHandler;
}

@property (retain, nonatomic) NSLock *propertyLock;
@property (nonatomic) unsigned long long sessionIdentifier;
@property (copy, nonatomic) CDUnknownBlockType sessionHandler;
@property (copy, nonatomic) CDUnknownBlockType characteristicsHandler;
@property (nonatomic, readonly) HKHealthService *service;

- (id)initWithService:(id)arg1;

@end
