/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSLocale, NSString;

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface AVMetadataItemInternal : NSObject

{
    struct OpaqueFigMetadataReader *reader;
    long long itemIndex;
    NSString *identifier;
    NSString *keySpace;
    id <NSObject><NSCopying> key;
    NSString *commonKey;
    NSLocale *locale;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    id <NSObject><NSCopying> value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    NSDate *startDate;
    NSDate *discoveryTimestamp;
    NSString *dataType;
    NSDictionary *extras;
}

@end
