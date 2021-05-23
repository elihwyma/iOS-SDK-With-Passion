/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TIAssetAttributes : NSObject

{
    NSString *_type;
    NSString *_inputModeLevel;
    NSDictionary *_region;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *inputModeLevel;
@property (nonatomic, readonly) NSDictionary *region;

+ (_Bool)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(CDUnknownBlockType)arg3;
+ (_Bool)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(_Bool)arg3;
+ (_Bool)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(_Bool)arg3;
+ (id)assetAttributesWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;
+ (_Bool)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(_Bool)arg3 lenientMatch:(_Bool)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3;
- (_Bool)containMatchingType:(id)arg1;
- (_Bool)containMatchingTypeIn:(id)arg1;
- (_Bool)containMatchingInputModeLevel:(id)arg1;
- (_Bool)containMatchingInputModeLevelIn:(id)arg1;
- (_Bool)containMatchingRegionIn:(id)arg1 shouldLenientlyMatchRegion:(CDUnknownBlockType)arg2;
- (_Bool)containMatchingAttributes:(id)arg1;

@end
