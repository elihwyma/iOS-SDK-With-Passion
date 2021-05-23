/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject

{
    NSMutableArray *_events;
    NSMutableDictionary *_producers;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableDictionary *producers;

+ (id)sharedManager;

- (id)init;
- (void)commit;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 withPayload:(id)arg2;
- (void)addEvent:(id)arg1 withPayloadBlock:(CDUnknownBlockType)arg2;

@end
