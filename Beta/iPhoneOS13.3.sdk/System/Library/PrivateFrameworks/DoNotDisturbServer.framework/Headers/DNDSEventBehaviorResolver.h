/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class CNContactStore, CNFavorites, NSMutableArray, NSString;

@protocol DNDSEventBehaviorResolverDataSource, DNDSModeRepository, OS_dispatch_queue;

@interface DNDSEventBehaviorResolver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSModeRepository> _modeRepository;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSMutableArray *_resolutionRecord;
    id <DNDSEventBehaviorResolverDataSource> _dataSource;
}

@property (weak, nonatomic) id <DNDSEventBehaviorResolverDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *sysdiagnoseDataIdentifier;

- (void)dealloc;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (id)_queue_resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (unsigned long long)_queue_resolveOutcomeForEventSource:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 reason:(out unsigned long long *)arg4;
- (_Bool)_queue_eventSourceIsFavorite:(id)arg1;
- (_Bool)_queue_eventSourceIsContact:(id)arg1;
- (_Bool)_queue_eventSourceIsContact:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (_Bool)_queue_eventSourceIsRepeat:(id)arg1 clientDetails:(id)arg2 date:(id)arg3;
- (_Bool)_queue_eventSourceIsEmergencyContact:(id)arg1;
- (id)initWithModeRepository:(id)arg1 contactStore:(id)arg2;
- (id)resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id *)arg4;

@end
