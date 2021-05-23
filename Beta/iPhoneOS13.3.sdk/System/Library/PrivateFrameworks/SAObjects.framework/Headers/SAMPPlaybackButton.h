/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (copy, nonatomic) NSArray *pauseCommands;
@property (copy, nonatomic) NSArray *playCommands;

+ (id)playbackButton;
+ (id)playbackButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
