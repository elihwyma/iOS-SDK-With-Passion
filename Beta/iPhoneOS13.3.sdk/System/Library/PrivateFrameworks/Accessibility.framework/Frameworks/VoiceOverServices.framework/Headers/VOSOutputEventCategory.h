/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VOSOutputEventCategory : NSObject

{
    NSArray *_outputEvents;
    NSString *_localizedCategoryName;
}

+ (id)interaction;
+ (id)system;
+ (id)allCategories;
+ (id)voiceOverFeedback;
+ (id)appFeedback;
+ (id)braille;
+ (id)textEditing;

- (id)init;
- (id)localizedCategoryName;
- (void)setLocalizedCategoryName:(id)arg1;
- (id)initWithOutputEvents:(id)arg1 localizedCategoryName:(id)arg2;
- (void)setOutputEvents:(id)arg1;
- (id)outputEvents;
- (_Bool)containsOutputEvent:(id)arg1;

@end
