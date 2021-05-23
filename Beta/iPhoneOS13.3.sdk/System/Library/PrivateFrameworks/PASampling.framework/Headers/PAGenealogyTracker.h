/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PAGenealogyTracker : NSObject

{
    NSMutableDictionary *_messages;
    NSMutableDictionary *_breadcrumbs;
    NSMutableDictionary *_activityNames;
    struct os_activity_stream_s *_messageStream;
}

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (id)init;
- (void)dealloc;
- (void)stopTracking;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)breadcrumbsForProcess:(int)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (id)activityNameForId:(unsigned long long)arg1;
- (id)messagesForThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (void)trackPid:(int)arg1 withFlags:(unsigned long long)arg2;
- (void)_parseStreamEntry:(struct os_activity_stream_entry_s *)arg1;
- (void)_addBreadcrumb:(struct os_activity_breadcrumb_s *)arg1 forProcess:(id)arg2 withActivityId:(unsigned long long)arg3;
- (void)_addMessage:(struct os_trace_message_s *)arg1 withActivityId:(unsigned long long)arg2;
- (void)_addActivityName:(const char *)arg1 forId:(unsigned long long)arg2;
- (void)trackGloballyWithFlags:(unsigned long long)arg1;

@end
