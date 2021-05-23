/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcherResponse.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherJSONResponse : LPFetcherResponse

{
    id _rootObject;
}

@property (retain, nonatomic, readonly) id rootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isValidMIMEType:(id)arg1;
+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;

- (id)initWithRootObject:(id)arg1 fetcher:(id)arg2;

@end
