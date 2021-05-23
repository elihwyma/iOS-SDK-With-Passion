/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject

{
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;

- (id)init;
- (id)commandStringsTableForLocaleIdentifier:(id)arg1;
- (void)_flushBuiltInCommandsStringsTable;
- (id)commandAttributes;

@end
