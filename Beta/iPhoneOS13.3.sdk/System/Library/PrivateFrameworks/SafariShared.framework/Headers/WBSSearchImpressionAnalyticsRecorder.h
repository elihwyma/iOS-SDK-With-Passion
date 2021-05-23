/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, WBSSearchProvider;

@interface WBSSearchImpressionAnalyticsRecorder : NSObject

{
    NSArray *_searchProviders;
    WBSSearchProvider *_defaultSearchProvider;
}

@property (copy, nonatomic) NSArray *searchProviders;
@property (retain, nonatomic) WBSSearchProvider *defaultSearchProvider;

+ (id)sharedRecorder;

- (id)init;
- (id)_searchProviderForURL:(id)arg1;
- (void)didActualizeImpressionForURL:(id)arg1 isFromUnifiedField:(_Bool)arg2;

@end
