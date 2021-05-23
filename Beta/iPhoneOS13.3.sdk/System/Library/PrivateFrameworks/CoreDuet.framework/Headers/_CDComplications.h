/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject

{
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
    NSDictionary *_activeComplications;
}

@property (copy) NSDictionary *activeComplications;

+ (id)sharedComplication;
+ (id)initializeForAdmissionChecking:(_Bool)arg1;

- (id)initForComplications;
- (void)readOutActiveComplications;
- (int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2;
- (_Bool)watchIsCharging;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1;
- (_Bool)admissionCheckOnComplication:(id)arg1 forRemote:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isBundleActiveComplication:(id)arg1;
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (id)CDAttributeForComplication:(id)arg1 error:(id *)arg2;

@end
