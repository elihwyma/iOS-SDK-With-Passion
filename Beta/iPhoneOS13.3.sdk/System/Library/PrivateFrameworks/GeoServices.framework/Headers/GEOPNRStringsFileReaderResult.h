/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPNRStringsFileReaderResult : NSObject

{
    NSString *_country;
    NSString *_region;
    NSString *_city;
}

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *city;
@property (nonatomic, readonly) long long score;

+ (long long)maxPossibleScore;

- (_Bool)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2;
- (id)separatorForLanguage:(id)arg1;
- (id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3;
- (_Bool)isEqualTo:(id)arg1;
- (id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3;
- (_Bool)isPlaceHolderForEmpty;

@end
