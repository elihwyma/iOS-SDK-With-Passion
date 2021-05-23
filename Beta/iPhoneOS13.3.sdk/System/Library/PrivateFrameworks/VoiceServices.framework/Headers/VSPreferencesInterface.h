/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUserDefaults;

@interface VSPreferencesInterface : NSObject

{
    NSUserDefaults *_defaults;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSDate *lastTTSRequestDate;
@property (nonatomic, readonly) NSString *deviceUUID;

+ (id)defaultInstance;

- (id)initWithSuiteName:(id)arg1;
- (id)autoDownloadedVoicesForClientID:(id)arg1;
- (void)migrateDefaults;
- (void)setAutoDownloadedVoices:(id)arg1 withClientID:(id)arg2;

@end
