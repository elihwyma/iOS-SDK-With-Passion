/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface GEOPNRStringsFileReader : NSObject

{
    NSArray *_supportedLanguages;
    NSDictionary *_offsetForLang;
    NSData *_stringsFile;
}

@property (retain, nonatomic, readonly) NSArray *supportedLanguages;
@property (retain, nonatomic, readonly) NSDictionary *offsetForLang;
@property (retain, nonatomic, readonly) NSData *stringsFile;

- (id)initWithFile:(id)arg1;
- (id)stringForLang:(id)arg1 withId:(unsigned int)arg2;

@end
