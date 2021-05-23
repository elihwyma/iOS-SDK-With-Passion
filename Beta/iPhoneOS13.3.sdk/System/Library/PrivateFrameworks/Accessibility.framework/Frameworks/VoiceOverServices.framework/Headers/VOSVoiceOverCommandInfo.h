/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject

{
    NSDictionary *_brailleCommands;
}

- (id)localizedNameForCategory:(id)arg1;
- (void)_loadBrailleCommandsIfNecessary;
- (id)brailleVoiceOverCategories;
- (id)brailleCommandsForCategory:(id)arg1;
- (id)localizedNameForCommand:(id)arg1;

@end
