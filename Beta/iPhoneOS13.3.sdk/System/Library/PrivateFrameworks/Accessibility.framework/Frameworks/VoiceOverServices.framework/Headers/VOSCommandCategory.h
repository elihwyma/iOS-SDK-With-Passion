/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VOSCommandCategory : NSObject

{
    NSArray *_commands;
    NSString *_localizedCategoryName;
}

@property (retain, nonatomic) NSArray *commands;
@property (retain, nonatomic) NSString *localizedCategoryName;

+ (id)interaction;
+ (id)editing;
+ (id)system;
+ (id)output;
+ (id)scrolling;
+ (id)other;
+ (id)allCategories;
+ (id)basicNavigation;
+ (id)textNavigation;
+ (id)advancedNavigation;
+ (id)rotor;
+ (id)speechAndAudio;
+ (id)voiceOverFeatures;
+ (id)internalOnly;
+ (id)handwriting;
+ (id)brailleScreenInput;
+ (_Bool)categories:(id)arg1 containsCommand:(id)arg2;

- (id)init;
- (id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2;
- (_Bool)containsCommand:(id)arg1;

@end
