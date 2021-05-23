/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PLService.h>

@class AWDServerConnection, NSMutableDictionary, NSMutableSet;

@interface PLAWDMetricsService : PLService

{
    AWDServerConnection *_awdServerConn;
    NSMutableSet *_currRunningMetrics;
    NSMutableSet *_updateRunningMetrics;
    NSMutableDictionary *_classDictionary;
}

@property (retain) AWDServerConnection *awdServerConn;
@property (retain) NSMutableSet *currRunningMetrics;
@property (retain) NSMutableSet *updateRunningMetrics;
@property (retain) NSMutableDictionary *classDictionary;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void)initOperatorDependancies;
- (_Bool)initAWDInterface;
- (_Bool)connectToAWDServer;
- (void)auxClassWrapper:(id)arg1 withAction:(long long)arg2;
- (void)threadFunc;

@end
