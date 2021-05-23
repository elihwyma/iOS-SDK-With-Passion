/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@class CLLocation, NSDate, NSString;

@protocol RCMutableRecording <Swift>

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *evictionDate;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double duration;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) long long iTunesPersistentID;
@property (nonatomic) _Bool synced;
@property (nonatomic) _Bool pendingRestore;
@property (nonatomic) _Bool playable;
@property (nonatomic) _Bool manuallyRenamed;
@property (nonatomic) _Bool editing;
@property (nonatomic) _Bool downloading;
@property (nonatomic) _Bool recordedOnWatch;

@end
