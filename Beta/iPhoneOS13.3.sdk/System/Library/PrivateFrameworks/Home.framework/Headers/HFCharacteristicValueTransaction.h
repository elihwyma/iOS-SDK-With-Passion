/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFMutableAggregatedCharacteristicReadPolicy, HFUpdateLogger, NAFuture, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_group;

@interface HFCharacteristicValueTransaction : NSObject

{
    _Bool _loggerIsExternal;
    HFMutableAggregatedCharacteristicReadPolicy *_readPolicy;
    NSMutableSet *_characteristicsToRead;
    NSMutableSet *_writeCharacteristicRequests;
    NSMutableSet *_actionSetsToExecute;
    NSMutableSet *_actionsToExecute;
    NSDictionary *_actionSetErrorsKeyedByUUID;
    NSError *_actionsError;
    NSError *_overallReadError;
    NSError *_overallWriteError;
    NSMutableDictionary *_readFuturesKeyedByCharacteristicIdentifier;
    NSMutableDictionary *_writeFuturesKeyedByCharacteristicIdentifier;
    NAFuture *_commitFuture;
    NSObject<OS_dispatch_group> *_onFinishGroup;
    NSMutableArray *_clientReasonsStack;
    HFUpdateLogger *_logger;
}

@property (retain, nonatomic) HFMutableAggregatedCharacteristicReadPolicy *readPolicy;
@property (retain, nonatomic) NSMutableSet *characteristicsToRead;
@property (retain, nonatomic) NSMutableSet *writeCharacteristicRequests;
@property (retain, nonatomic) NSMutableSet *actionSetsToExecute;
@property (retain, nonatomic) NSMutableSet *actionsToExecute;
@property (retain, nonatomic) NSDictionary *actionSetErrorsKeyedByUUID;
@property (retain, nonatomic) NSError *actionsError;
@property (retain, nonatomic) NSError *overallReadError;
@property (retain, nonatomic) NSError *overallWriteError;
@property (retain, nonatomic) NSMutableDictionary *readFuturesKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *writeFuturesKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NAFuture *commitFuture;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *onFinishGroup;
@property (retain, nonatomic) NSMutableArray *clientReasonsStack;
@property (retain, nonatomic) HFUpdateLogger *logger;
@property (nonatomic) _Bool loggerIsExternal;

- (id)init;
- (id)executionErrorForActionSet:(id)arg1;

@end
