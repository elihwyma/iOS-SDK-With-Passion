/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CACSpokenCommandGroup : NSObject

{
    NSString *_identifier;
    NSMutableArray *_commandsArray;
    NSString *_displayString;
    _Bool _isEnabled;
    _Bool _isCustom;
    _Bool _isConfirmationRequired;
    unsigned long long _searchScore;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *commandsArray;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long searchScore;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool isCustom;
@property (nonatomic) _Bool isConfirmationRequired;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)setLocale:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)isVisible;
- (_Bool)isGroup;
- (void)saveToPreferences;
- (id)cloneWithoutCommands;

@end
