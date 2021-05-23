/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject

{
    NSMutableSet *_openSearchDescriptionURLs;
}

+ (id)sharedFetcher;

- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1;
- (void)fetchOpenSearchDescriptionWithURL:(id)arg1;

@end
