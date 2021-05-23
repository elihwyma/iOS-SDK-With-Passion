/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject

{
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (id)description;
- (void)setFont:(id)arg1;
- (id)font;
- (unsigned int)entryIndex;
- (void)setEntryIndex:(unsigned int)arg1;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;

@end
