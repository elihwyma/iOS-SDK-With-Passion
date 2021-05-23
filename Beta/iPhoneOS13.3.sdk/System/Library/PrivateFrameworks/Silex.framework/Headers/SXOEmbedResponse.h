/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, NSURL;

@interface SXOEmbedResponse : SXJSONObject

@property (nonatomic, readonly) double thumbnailWidth;
@property (nonatomic, readonly) double thumbnailHeight;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *authorName;
@property (nonatomic, readonly) NSURL *authorURL;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSURL *providerURL;
@property (nonatomic, readonly) double cacheAge;
@property (nonatomic, readonly) NSURL *thumbnailURL;
@property (nonatomic, readonly) struct CGSize thumbnailSize;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (id)objectForKey:(id)arg1;
- (double)cacheAgeWithValue:(id)arg1 withType:(int)arg2;

@end
