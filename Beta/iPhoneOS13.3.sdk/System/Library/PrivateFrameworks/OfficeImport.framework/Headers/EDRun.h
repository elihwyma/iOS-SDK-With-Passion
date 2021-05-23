/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EDRun : NSObject

{
    EDResources *mResources;
    unsigned long long mCharIndex;
    unsigned long long mFontIndex;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;
+ (id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;
+ (id)runWithResources:(id)arg1;
+ (id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (long long)key;
- (void)setFont:(id)arg1;
- (id)font;
- (unsigned long long)fontIndex;
- (unsigned long long)charIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (id)effects;
- (void)overrideFont:(id)arg1;
- (void)adjustIndex:(unsigned long long)arg1;
- (void)setCharIndex:(unsigned long long)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3;
- (id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;
- (_Bool)isEqualToRun:(id)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3;
- (id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4;

@end
