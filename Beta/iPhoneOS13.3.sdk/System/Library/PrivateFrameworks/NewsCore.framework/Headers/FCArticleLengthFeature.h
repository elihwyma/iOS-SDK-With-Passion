/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

{
    NSString *_lengthID;
}

@property (retain, nonatomic) NSString *lengthID;

+ (id)shortLengthFeature;
+ (id)mediumLengthFeature;
+ (id)longLengthFeature;

- (id)init;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)fr_description;
- (id)initWithLengthIdentifier:(id)arg1;

@end
