/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString, NSURL;

@protocol RCRecording <Swift>

@property (nonatomic, readonly) _Bool isContentBeingModified;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSDate *evictionDate;
@property (copy, nonatomic, readonly) NSString *path;
@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSURL *URIRepresentation;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) CLLocation *location;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic, readonly) NSString *customLabel;
@property (copy, nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) long long iTunesPersistentID;
@property (nonatomic, readonly) _Bool synced;
@property (nonatomic, readonly) _Bool pendingRestore;
@property (nonatomic, readonly) _Bool playable;
@property (nonatomic, readonly) _Bool manuallyRenamed;
@property (nonatomic, readonly) _Bool editing;
@property (nonatomic, readonly) _Bool evicted;
@property (nonatomic, readonly) _Bool downloading;
@property (nonatomic) _Bool recordedOnWatch;
@property (nonatomic, readonly) _Bool uploaded;
@property (nonatomic, readonly) AVAsset *avAsset;

@end
