/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOSearchResultSection : NSObject

{
    long long _cellType;
    NSString *_headerDisplayName;
    NSString *_subHeaderDisplayName;
}

@property (nonatomic) long long cellType;
@property (copy, nonatomic) NSString *headerDisplayName;
@property (copy, nonatomic) NSString *subHeaderDisplayName;

- (id)init;
- (id)initWithSearchResultSection:(id)arg1;

@end
