/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPFetcher, LPFetcherResponse;

__attribute__((visibility("hidden")))
@interface LPFetcherGroupTask : NSObject

{
    _Bool _hasStarted;
    LPFetcher *_fetcher;
    LPFetcherResponse *_response;
}

@property (retain, nonatomic) LPFetcher *fetcher;
@property (retain, nonatomic) LPFetcherResponse *response;
@property (nonatomic) _Bool hasStarted;

@end
