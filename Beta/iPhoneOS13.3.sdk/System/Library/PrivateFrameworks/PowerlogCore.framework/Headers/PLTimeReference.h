/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PLTimeReferenceManager;

@interface PLTimeReference : NSObject

{
    double _offset;
    id <PLTimeReferenceManager> _timeManager;
    long long _timeReferenceType;
    NSString *_entryDefinitionKey;
    double _hourBucketOffset;
}

@property (nonatomic) double hourBucketOffset;
@property (nonatomic) double offset;
@property (retain) id <PLTimeReferenceManager> timeManager;
@property long long timeReferenceType;
@property (retain) NSString *entryDefinitionKey;

+ (id)defaultsKeyFromEntryDefinitionKey:(id)arg1;
+ (id)hourBucketOffsetKeyFromEntryDefinitionKey:(id)arg1;

- (id)currentTime;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3;
- (void)initializeOffsetWithEntries:(id)arg1;
- (void)registerForDayChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (id)addTimeOffsetToMonotonicTime:(id)arg1;
- (double)getHourBucketOffset;
- (void)writeOffsetToDefaults;
- (double)computeHourBucketOffset;

@end
