/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SACalendar;

@interface SAMPPlaybackInfo : AceObject <Swift>

@property (nonatomic) long long durationMillis;
@property (retain, nonatomic) SACalendar *lastPlayedDate;
@property (nonatomic) long long playbackPositionMillis;
@property (nonatomic) long long plays;
@property (nonatomic) _Bool rememberPlaybackPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)playbackInfo;
+ (id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
