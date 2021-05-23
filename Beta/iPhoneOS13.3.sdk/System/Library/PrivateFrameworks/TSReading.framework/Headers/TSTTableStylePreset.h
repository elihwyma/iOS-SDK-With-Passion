/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <Swift>

{
    unsigned long long mIndex;
    TSTTableStyleNetwork *mStyleNetwork;
}

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property (nonatomic, readonly) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;
- (_Bool)isThemeEquivalent:(id)arg1;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)p_documentRoot;
- (id)styleNetworkInStylesheet:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1 index:(unsigned long long)arg2;
- (id)swatchImage;

@end
