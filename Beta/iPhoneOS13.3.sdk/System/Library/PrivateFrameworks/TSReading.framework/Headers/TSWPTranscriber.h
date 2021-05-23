/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSString;

@interface TSWPTranscriber : NSObject

{
    NSString *_displayName;
    NSString *_identifier;
    NSString *_transformIdentifier;
    NSLocale *_romanizationLocale;
}

@property (readonly) NSLocale *romanizationLocale;

+ (id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;
- (id)transcribeText:(id)arg1 withLocale:(id)arg2;
- (id)transcribeText:(id)arg1;

@end
