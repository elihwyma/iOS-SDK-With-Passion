/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject

{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;

- (id)init;
- (_Bool)resize:(int)arg1;
- (int)selectInto:(id)arg1;
- (id)initWithColours:(id)arg1;
- (_Bool)setEntries:(int)arg1 in_colours:(id)arg2;
- (id)getColour:(int)arg1;

@end
