/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString;

@interface HDHealthRecordsNotificationManager : NSObject

{
    HDProfile *_profile;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)notifyForNewHealthRecordsForProfile:(id)arg1;
+ (void)badgeForNewHealthRecordsForProfile:(id)arg1;
+ (void)_notifyUserIfNecessaryForProfile:(id)arg1;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (_Bool)stopWithError:(id *)arg1;
- (_Bool)startWithError:(id *)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;

@end
