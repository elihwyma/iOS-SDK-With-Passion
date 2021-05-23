/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;

@interface SXAutoPlacement : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXAdvertisementPlacementType> advertisement;
@property (nonatomic, readonly) id <SXSuggestedArticlesPlacementType> suggestedArticles;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end
