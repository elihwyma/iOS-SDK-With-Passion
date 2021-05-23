/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcherResponse.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherStringResponse : LPFetcherResponse

{
    NSString *_string;
}

@property (copy, nonatomic, readonly) NSString *string;

- (id)initWithString:(id)arg1 fetcher:(id)arg2;

@end
