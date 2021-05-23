/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _CDEventStreams : NSObject

{
    _Bool _allStreamsLoaded;
    NSDictionary *_allEventStreams;
    NSDictionary *_allKBEventStreams;
}

@property (nonatomic) _Bool allStreamsLoaded;
@property (nonatomic, readonly) NSDictionary *allEventStreams;
@property (nonatomic, readonly) NSDictionary *allKBEventStreams;

+ (id)sharedInstance;
+ (id)ephemeralitySchedule;
+ (void)loadAllEventStreams;
+ (id)eventStreamPropertiesForKBName:(id)arg1;
+ (id)contentProviderPlistEventStreamsForPath:(id)arg1;
+ (id)eventStreamForName:(id)arg1;
+ (id)eventStreamPropertiesForName:(id)arg1;
+ (id)eventStreamPropertiesForEventStream:(id)arg1;
+ (id)rateLimiterForEventStreamName:(id)arg1;
+ (id)privacyPolicyForEventStreamName:(id)arg1;

- (id)init;
- (id)_eventStreamForName:(id)arg1 orKBName:(id)arg2;
- (void)setAllEventStreams:(id)arg1;
- (void)setAllKBEventStreams:(id)arg1;

@end
