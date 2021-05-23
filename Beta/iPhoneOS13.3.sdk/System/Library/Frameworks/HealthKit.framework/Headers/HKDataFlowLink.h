/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, Protocol;

@protocol HKDataFlowLinkProcessor, OS_os_log;

@interface HKDataFlowLink : NSObject

{
    NSHashTable *_sources;
    NSHashTable *_destinations;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s _lock;
    id <HKDataFlowLinkProcessor> _processor;
    Protocol *_sourceProtocol;
    Protocol *_destinationProtocol;
}

@property (weak, nonatomic, readonly) id <HKDataFlowLinkProcessor> processor;
@property (nonatomic, readonly) Protocol *sourceProtocol;
@property (nonatomic, readonly) Protocol *destinationProtocol;

- (id)description;
- (void)addSource:(id)arg1;
- (void)removeSource:(id)arg1;
- (void)addDestination:(id)arg1;
- (void)source:(id)arg1 didAddUpstreamSource:(id)arg2;
- (void)removeDestination:(id)arg1;
- (id)destinationProcessorsConformingToProtocol:(id)arg1;
- (void)destination:(id)arg1 didAddDownstreamDestination:(id)arg2;
- (id)initWithProcessor:(id)arg1 sourceProtocol:(id)arg2 destinationProtocol:(id)arg3 loggingCategory:(id)arg4;
- (id)allSourceProcessors;
- (id)allDestinationProcessors;
- (void)sendToDestinationProcessors:(CDUnknownBlockType)arg1;

@end
