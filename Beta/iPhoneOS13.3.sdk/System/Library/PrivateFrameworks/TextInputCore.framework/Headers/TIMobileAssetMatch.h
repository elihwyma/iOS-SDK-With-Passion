/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TIMobileAssetMatch : NSObject

{
    NSArray *_types;
    NSArray *_inputModeLevels;
    NSArray *_regions;
}

@property (nonatomic, readonly) NSArray *types;
@property (nonatomic, readonly) NSArray *inputModeLevels;
@property (nonatomic, readonly) NSArray *regions;

+ (id)knownAssetRegionAttributes;
+ (id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3;

@end
