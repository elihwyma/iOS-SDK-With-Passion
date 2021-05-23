/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXFeedNavigationAppearance, SXJSONDictionary, SXTabBarAppearance;

@interface SXMetaData : SXJSONObject

@property (nonatomic, readonly) _Bool transparentToolbar;
@property (nonatomic, readonly) NSString *canonicalURL;
@property (nonatomic, readonly) NSString *thumbnailImageIdentifier;
@property (nonatomic, readonly) NSString *documentVersion;
@property (nonatomic, readonly) SXTabBarAppearance *tabBarAppearance;
@property (nonatomic, readonly) SXFeedNavigationAppearance *feedNavigationAppearance;
@property (nonatomic, readonly) SXJSONDictionary *campaignData;
@property (nonatomic, readonly) _Bool showNewsSubscribe;
@property (nonatomic, readonly) _Bool suppressMoreFromPublisher;
@property (nonatomic, readonly) _Bool suppressRelatedArticles;

@end
