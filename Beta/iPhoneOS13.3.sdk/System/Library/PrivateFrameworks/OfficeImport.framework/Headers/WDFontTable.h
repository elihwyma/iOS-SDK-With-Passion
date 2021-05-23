/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject

{
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)init;
- (id)description;
- (unsigned long long)count;
- (void)clear;
- (id)fonts;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontWithName:(id)arg1;
- (id)createFontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(_Bool)arg2;
- (unsigned long long)indexOfFont:(id)arg1;

@end
