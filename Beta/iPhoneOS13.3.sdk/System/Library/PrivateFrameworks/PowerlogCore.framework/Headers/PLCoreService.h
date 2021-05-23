/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <PowerlogCore/PLCoreOperator.h>

@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

{
    NSMutableDictionary *_services;
}

@property (retain) NSMutableDictionary *services;

- (id)init;
- (void)startServices;
- (void)stopServices;

@end
