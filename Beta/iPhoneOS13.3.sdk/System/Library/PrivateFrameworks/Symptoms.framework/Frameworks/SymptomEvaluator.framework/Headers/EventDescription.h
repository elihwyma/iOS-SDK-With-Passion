/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@interface EventDescription : NSObject

{
    int _eventType;
    NSDate *_creationTimeStamp;
    unsigned long long _processId;
    char *_processName;
    char *_bundleId;
    long long _eventLen;
    void *_eventData;
    NSMutableDictionary *_eventQualifiers;
    NSString *_eventKey;
}

@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly) NSDate *creationTimeStamp;
@property (nonatomic, readonly) unsigned long long processId;
@property (nonatomic, readonly) char *processName;
@property (nonatomic, readonly) char *bundleId;
@property (nonatomic, readonly) long long eventLen;
@property (nonatomic, readonly) void *eventData;
@property (nonatomic, readonly) NSMutableDictionary *eventQualifiers;
@property (retain, nonatomic) NSString *eventKey;

- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1 length:(long long)arg2 data:(void *)arg3 fromPid:(unsigned long long)arg4 named:(char *)arg5 bundleId:(const char *)arg6;
- (char *)originatorForLogging;
- (id)eventQualifierStringForKey:(id)arg1;

@end
