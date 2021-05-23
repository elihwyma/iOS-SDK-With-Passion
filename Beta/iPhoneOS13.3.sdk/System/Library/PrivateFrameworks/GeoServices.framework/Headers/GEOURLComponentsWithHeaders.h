/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOURLWithHeaders, NSMutableDictionary, NSURL, NSURLComponents;

@interface GEOURLComponentsWithHeaders : NSObject

{
    NSURLComponents *_URLComponents;
    NSMutableDictionary *_headerFields;
}

@property (nonatomic, readonly) NSURLComponents *URLComponents;
@property (nonatomic, readonly) NSMutableDictionary *headerFields;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) GEOURLWithHeaders *URLWithHeaders;

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithURLComponents:(id)arg1;
- (void)updateQueryItemsWithBlock:(CDUnknownBlockType)arg1;

@end
