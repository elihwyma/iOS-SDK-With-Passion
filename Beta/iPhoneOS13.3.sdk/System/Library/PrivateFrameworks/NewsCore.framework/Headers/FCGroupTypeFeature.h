/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPersonalizationFeature.h>

@interface FCGroupTypeFeature : FCPersonalizationFeature

{
    long long _groupType;
}

@property (nonatomic) long long groupType;

- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithGroupType:(long long)arg1;

@end
