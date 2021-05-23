/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPersonalizationFeature.h>

@interface FCPublisherPremiumFeature : FCPersonalizationFeature

{
    _Bool _premium;
}

@property (nonatomic) _Bool premium;

- (id)init;
- (id)initWithTagID:(id)arg1 premium:(_Bool)arg2;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)fr_description;

@end
