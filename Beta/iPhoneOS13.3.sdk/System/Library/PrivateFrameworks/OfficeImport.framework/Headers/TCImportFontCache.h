/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TCImportFontCache : NSObject

{
    OITSUNoCopyDictionary *mFontCache;
    NSMutableDictionary *mFontNameCache;
}

@property (nonatomic, readonly) NSMutableDictionary *fontNameCache;

+ (struct CGSize)stringSizeForText:(id)arg1 ctFontRef:(struct __CTFont *)arg2;

- (id)init;
- (void)dealloc;
- (struct __CTFont *)ctFontRefForKey:(id)arg1;
- (struct __CTFont *)fontRefForFontName:(id)arg1 size:(int)arg2;
- (struct CGSize)stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2;
- (struct CGSize)stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3;

@end
