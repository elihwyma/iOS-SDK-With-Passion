/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODefaultsDBCollection, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultsDBValue : NSObject

{
    GEODefaultsDBCollection *_parent;
    long long _dbId;
    NSString *_type;
    id _value;
}

@property (weak, nonatomic, readonly) GEODefaultsDBCollection *parent;
@property (nonatomic) long long dbId;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) id value;

+ (id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3;

- (id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3;

@end
