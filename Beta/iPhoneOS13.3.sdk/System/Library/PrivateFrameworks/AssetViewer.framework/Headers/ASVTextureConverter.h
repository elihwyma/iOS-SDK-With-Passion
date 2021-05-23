/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@interface ASVTextureConverter : NSObject

@property (nonatomic, readonly) long long converterType;

+ (id)defaultTextureConverters;
+ (id)newConverterOfType:(long long)arg1;
+ (id)preferredConverterFromConverters:(id)arg1 forTextureDescription:(id)arg2;

- (_Bool)canConvertTextureWithDescription:(id)arg1;
- (unsigned long long)alignUp:(unsigned long long)arg1 toAlignment:(unsigned long long)arg2;
- (CDStruct_ba838cea)estimatedMemoryDeltaForTextureWithDescription:(id)arg1;

@end
