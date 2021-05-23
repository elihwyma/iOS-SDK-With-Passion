/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation

{
    ISPropertyListProvider *_dataProvider;
    NSDictionary *_propertyList;
}

@property (retain) ISPropertyListProvider *dataProvider;

- (void)dealloc;
- (void)run;
- (id)initWithPropertyList:(id)arg1;

@end
