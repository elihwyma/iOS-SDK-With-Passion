/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment

{
    NSDictionary *mConfig;
    struct Dictionary *mOperatorDictionary;
    struct Manager {
        CDUnknownFunctionPointerType *;
        struct Collection *;
        struct EQKitCacheLRUCounter;
    } *mFontManager;
    struct Manager {
        struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path>> *;
        struct EQKitCacheLRUCounter;
        _Bool;
        struct QuantizationConfig;
    } *mKerningManager;
    struct Config *mLayoutConfig;
}

@property (nonatomic) _Bool kerning;

+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;
+ (id)dataForEnvironment:(id)arg1;

- (void)dealloc;
- (void)endLayout;
- (id)initWithConfig:(id)arg1;
- (const Manager_e51557f8 *)fontManager;
- (void)beginLayout;
- (const Manager_36464627 *)kerningManager;
- (const struct Config *)layoutConfig;
- (const struct Dictionary *)operatorDictionary;
- (id)newDictionaryForArchiving;

@end
