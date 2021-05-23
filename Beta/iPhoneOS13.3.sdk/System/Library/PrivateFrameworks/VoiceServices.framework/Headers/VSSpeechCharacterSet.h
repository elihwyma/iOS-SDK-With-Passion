/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject

{
    NSCharacterSet *_characterSet;
}

@property (retain, nonatomic) NSCharacterSet *characterSet;

+ (id)languageMapping;

- (id)initWithLanguage:(id)arg1;
- (id)unspeakableRangeOfText:(id)arg1;

@end
