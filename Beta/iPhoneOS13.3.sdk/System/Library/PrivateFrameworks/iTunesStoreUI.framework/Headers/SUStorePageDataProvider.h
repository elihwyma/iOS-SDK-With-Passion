/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISDataProvider.h>

@class ISPropertyListProvider, SUClientInterface;

@interface SUStorePageDataProvider : ISDataProvider

{
    SUClientInterface *_clientInterface;
    long long _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property (retain) SUClientInterface *clientInterface;
@property long long outputType;
@property (copy) ISPropertyListProvider *propertyListDataProvider;
@property (readonly) _Bool shouldProcessTouchIDDialogs;

- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;

@end
