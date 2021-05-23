/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOResultTypeSearchFilter : NSObject

{
    unsigned long long _types;
}

@property (nonatomic, readonly) unsigned long long types;

- (id)init;
- (_Bool)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (id)initWithResultTypes:(unsigned long long)arg1;

@end
