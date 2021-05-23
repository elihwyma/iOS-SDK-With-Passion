/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SANPVideoLanguageOption;

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <Swift>

@property (copy, nonatomic) NSArray *availableSubtitles;
@property (copy, nonatomic) NSArray *availableTracks;
@property (retain, nonatomic) SANPVideoLanguageOption *currentAudioTrack;
@property (retain, nonatomic) SANPVideoLanguageOption *currentSubtitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)audioAndSubtitleLanguageOptions;
+ (id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
