/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TXRAssetCatalogSet : NSObject

{
    unsigned long long _interpretation;
    unsigned long long _origin;
    NSString *_name;
    _Bool _cubemap;
    NSMutableArray *_configs;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long interpretation;
@property (nonatomic) unsigned long long origin;
@property (nonatomic, readonly) _Bool cubemap;
@property (readonly) NSArray *configs;

- (id)init;
- (id)initWithName:(id)arg1;
- (id)exportAtLocation:(id)arg1 error:(id *)arg2;
- (_Bool)addConfig:(id)arg1 error:(id *)arg2;

@end
