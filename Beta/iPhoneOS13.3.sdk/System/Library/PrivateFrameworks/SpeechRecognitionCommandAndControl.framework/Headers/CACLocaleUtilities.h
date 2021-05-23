/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@interface CACLocaleUtilities : NSObject

+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)localizedUIStringForKey:(id)arg1;
+ (_Bool)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (id)systemLocaleIdentifier;
+ (_Bool)isSameLangaugeFromLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (_Bool)isLocaleIdentifier:(id)arg1 containedInLocaleIdentifiers:(id)arg2;
+ (id)normalizedLocaleIdentifier:(id)arg1;
+ (id)displayStringForByteSize:(unsigned long long)arg1;
+ (id)displayStringForTimeRemaining:(double)arg1;

@end
