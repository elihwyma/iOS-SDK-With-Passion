/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDState;

@protocol DNDSStateProviderDataSource;

@interface DNDSStateProvider : NSObject

{
    DNDState *_lastCalculatedState;
    id <DNDSStateProviderDataSource> _dataSource;
}

@property (copy) DNDState *lastCalculatedState;
@property (weak, nonatomic) id <DNDSStateProviderDataSource> dataSource;

- (void)recalculateState;

@end
