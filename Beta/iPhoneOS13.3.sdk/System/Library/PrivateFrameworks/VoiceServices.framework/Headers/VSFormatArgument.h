/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSFormatArgument : NSObject

{
    NSString *formatSpecifier;
    NSDictionary *attributes;
    NSString *formattedArg;
}

- (void)dealloc;

@end
