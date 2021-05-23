/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class WDCharacterProperties, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTableRowProperties : NSObject <Swift>

{
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_43955328 mOriginalProperties;
    CDStruct_43955328 mTrackedProperties;
}

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (void)addProperties:(id)arg1;
- (_Bool)header;
- (void)setHeader:(_Bool)arg1;
- (id)initWithDocument:(id)arg1;
- (id)characterProperties;
- (_Bool)isHeightOverridden;
- (id)tableProperties;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (void)addPropertiesValues:(CDStruct_43955328 *)arg1 to:(CDStruct_43955328 *)arg2;
- (short)widthBefore;
- (void)setWidthBefore:(short)arg1;
- (_Bool)isWidthBeforeOverridden;
- (int)widthBeforeType;
- (void)setWidthBeforeType:(int)arg1;
- (_Bool)isWidthBeforeTypeOverridden;
- (short)widthAfter;
- (void)setWidthAfter:(short)arg1;
- (_Bool)isWidthAfterOverridden;
- (int)widthAfterType;
- (void)setWidthAfterType:(int)arg1;
- (_Bool)isWidthAfterTypeOverridden;
- (int)heightType;
- (void)setHeightType:(int)arg1;
- (_Bool)isHeightTypeOverridden;
- (_Bool)isHeaderOverridden;

@end
