/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CACOnboardingCommandGroup : NSObject

{
    NSString *_groupTitle;
    NSArray *_commands;
}

@property (retain, nonatomic) NSString *groupTitle;
@property (retain, nonatomic) NSArray *commands;

+ (id)groupWithIdentifier:(id)arg1;
+ (id)groupsFromIdentifiers:(id)arg1;
+ (id)allCommandGroups;

- (id)initWithGroupTitle:(id)arg1 commands:(id)arg2;

@end
