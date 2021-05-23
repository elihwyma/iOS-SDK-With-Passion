/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDMarker : NSObject

{
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (id)init;
- (id)description;
- (unsigned int)size;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)setSize:(unsigned int)arg1;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)arg1;

@end
