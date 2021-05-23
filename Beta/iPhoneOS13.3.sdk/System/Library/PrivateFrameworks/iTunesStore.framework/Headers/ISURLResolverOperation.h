/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSURL;

@interface ISURLResolverOperation

{
    struct __CFHost *_host;
    NSURL *_url;
    NSURL *_URL;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly) NSArray *resolvedAddresses;
@property (readonly) NSArray *resolvedAddressStrings;

- (void)dealloc;
- (void)run;
- (id)initWithURL:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void)_runLookupForHostname:(id)arg1;
- (void)_resolutionCompletedWithError:(id)arg1;

@end
