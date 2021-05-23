/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcherResponse.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface LPFetcherErrorResponse : LPFetcherResponse

{
    NSError *_error;
}

@property (retain, nonatomic, readonly) NSError *error;

- (id)initWithError:(id)arg1 fetcher:(id)arg2;

@end
