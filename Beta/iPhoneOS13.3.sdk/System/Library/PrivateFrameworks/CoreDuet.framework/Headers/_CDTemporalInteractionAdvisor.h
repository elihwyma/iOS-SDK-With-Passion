/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, _CDInteractionStore;

@protocol OS_dispatch_queue;

@interface _CDTemporalInteractionAdvisor : NSObject

{
    int _settingsNotifyToken;
    _CDInteractionStore *_store;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableDictionary *_consumerToModelMap;
}

@property (retain) _CDInteractionStore *store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSMutableDictionary *consumerToModelMap;
@property int settingsNotifyToken;

- (void)dealloc;
- (id)initWithStore:(id)arg1;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)rankContacts:(id)arg1 usingSettings:(id)arg2;
- (void)updateConsumerModel;
- (id)rankerForDate:(id)arg1 settings:(id)arg2;

@end
