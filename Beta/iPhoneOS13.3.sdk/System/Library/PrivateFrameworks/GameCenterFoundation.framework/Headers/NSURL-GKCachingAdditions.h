/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSURL.h>

@interface NSURL (GKCachingAdditions)

- (id)_gkURLByAddingQueryParameters:(id)arg1;
- (id)cacheKeyRepresentation;
- (_Bool)_gkIsValidServerURL;
- (_Bool)_gkIsSecure;
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;
- (id)_gkQueryDictionary;

@end
