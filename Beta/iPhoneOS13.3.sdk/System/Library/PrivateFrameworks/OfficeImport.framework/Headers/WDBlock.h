/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject

{
    WDText *mText;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)text;
- (void)clearProperties;
- (id)initWithText:(id)arg1;
- (id)document;
- (int)blockType;
- (int)textType;
- (id)runIterator;
- (id)newRunIterator;

@end
