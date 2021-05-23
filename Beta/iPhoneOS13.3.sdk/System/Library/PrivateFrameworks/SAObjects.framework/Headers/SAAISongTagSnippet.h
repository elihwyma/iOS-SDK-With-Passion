/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class SAAISongTag, SAMPPlaybackButton, SAUIAppPunchOut;

@interface SAAISongTagSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *attributionPunchOut;
@property (retain, nonatomic) SAMPPlaybackButton *playbackButton;
@property (retain, nonatomic) SAUIAppPunchOut *purchaseSongPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *songDetailsPunchOut;
@property (retain, nonatomic) SAAISongTag *songTag;

+ (id)songTagSnippet;
+ (id)songTagSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
