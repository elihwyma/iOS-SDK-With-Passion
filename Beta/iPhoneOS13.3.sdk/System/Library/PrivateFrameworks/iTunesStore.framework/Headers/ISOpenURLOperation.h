/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOpenURLRequest;

@interface ISOpenURLOperation

{
    ISOpenURLRequest *_request;
}

@property (readonly) ISOpenURLRequest *openURLRequest;

- (id)init;
- (void)run;
- (_Bool)_openURL:(id)arg1;
- (id)initWithOpenURLRequest:(id)arg1;
- (id)_newSortedTargetsArray;

@end
