/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@interface BYLocaleDataSource : NSObject

{
    NSString *_language;
    NSMutableArray *_suggestedCountries;
    NSMutableArray *_moreCountries;
}

@property (retain, nonatomic) NSMutableArray *suggestedCountries;
@property (retain, nonatomic) NSMutableArray *moreCountries;
@property (copy, nonatomic) NSString *language;

+ (id)newWithLanguage:(id)arg1;

- (void)reloadData;
- (unsigned long long)numberOfRecommendedLocales;
- (unsigned long long)numberOfOtherLocales;
- (id)recommendedLocaleAtIndex:(unsigned long long)arg1;
- (id)otherLocaleAtIndex:(unsigned long long)arg1;

@end
