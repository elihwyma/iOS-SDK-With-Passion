/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSURL;

@interface GEOURLWithHeaders : NSObject

{
    NSURL *_URL;
    NSDictionary *_headerFields;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *headerFields;

- (id)init;
- (id)initWithURL:(id)arg1 headerFields:(id)arg2;

@end
