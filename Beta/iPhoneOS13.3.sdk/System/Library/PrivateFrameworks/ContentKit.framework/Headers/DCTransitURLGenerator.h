/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/DCMapsURLGenerator.h>

__attribute__((visibility("hidden")))
@interface DCTransitURLGenerator : DCMapsURLGenerator

- (id)scheme;
- (id)host;
- (id)path;
- (void)populateQueryDictionary;

@end
