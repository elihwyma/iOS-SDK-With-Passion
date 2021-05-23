/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TTSFormatArgument : NSObject

{
    NSString *formatSpecifier;
    NSDictionary *attributes;
    NSString *formattedArg;
}

- (void)dealloc;

@end
