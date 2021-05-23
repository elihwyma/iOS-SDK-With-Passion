/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject

{
    GEOPDRetainedSearchMetadata *_retainedSearchMetadata;
}

@property (nonatomic, readonly, getter=_query) NSString *query;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_retainedSearchMetadata;
- (id)initWithRetainedSearchMetadata:(id)arg1;

@end
