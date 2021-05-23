/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class ISStoreURLOperation, NSString, SUClientInterface, SUSectionsResponse;

@interface SULoadNetworkSectionsOperation : ISOperation

{
    ISStoreURLOperation *_baseOperation;
    SUClientInterface *_clientInterface;
    NSString *_expectedVersionString;
    SUSectionsResponse *_sectionsResponse;
}

@property (retain) ISStoreURLOperation *baseOperation;
@property (retain) NSString *expectedVersionString;
@property (readonly) SUSectionsResponse *sectionsResponse;

- (void)dealloc;
- (void)run;
- (void)_setSectionsResponse:(id)arg1;
- (id)initWithURL:(id)arg1 clientInterface:(id)arg2;
- (_Bool)_loadArtworkForResponse:(id)arg1;
- (id)_copyImageWithURL:(id)arg1 scale:(float)arg2 error:(id *)arg3;
- (id)_bestItemImageForImages:(id)arg1 withImageKind:(id)arg2;
- (id)_copyLoadedItemImage:(id)arg1 error:(id *)arg2;

@end
