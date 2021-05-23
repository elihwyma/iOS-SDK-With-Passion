/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataCollectorState;

@protocol HDDataCollector;

@interface HDDataCollectorRecord : NSObject

{
    id <HDDataCollector> _collector;
    HDDataCollectorState *_state;
}

@property (weak, nonatomic) id <HDDataCollector> collector;
@property (retain, nonatomic) HDDataCollectorState *state;

- (id)description;

@end
