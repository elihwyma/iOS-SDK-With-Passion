/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSMutableDictionary;

@interface NUTrait : NSObject <Swift>

{
    double _defaultValue;
    NSMutableDictionary *_traitBlocks;
}

@property (nonatomic, readonly) double defaultValue;
@property (nonatomic, readonly) NSMutableDictionary *traitBlocks;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)valueForTraitCollection:(id)arg1 size:(struct CGSize)arg2;
- (id)when:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithDefaultValue:(double)arg1;
- (double)valueForTraitCollection:(id)arg1 size:(struct CGSize)arg2 deviceTrait:(id)arg3;

@end
