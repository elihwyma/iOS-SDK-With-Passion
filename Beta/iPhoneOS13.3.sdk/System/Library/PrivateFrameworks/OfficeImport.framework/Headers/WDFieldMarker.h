/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRunWithCharacterProperties

{
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned int mZombieEmbed:1;
    unsigned int mResultDirty:1;
    unsigned int mResultEdited:1;
    unsigned int mLocked:1;
    unsigned int mPrivateResult:1;
    unsigned int mNested:1;
    unsigned int mHasSeparator:1;
}

- (id)description;
- (id)data;
- (void)setData:(id)arg1;
- (void)setLocked:(_Bool)arg1;
- (void)setHasSeparator:(_Bool)arg1;
- (_Bool)hasSeparator;
- (unsigned char)fieldType;
- (void)setFieldType:(unsigned char)arg1;
- (_Bool)locked;
- (id)initWithParagraph:(id)arg1;
- (_Bool)nested;
- (void)setNested:(_Bool)arg1;
- (int)fieldMarkerType;
- (int)runType;
- (void)setFieldPosition:(int)arg1;
- (void)setFieldMarkerType:(int)arg1;
- (int)fieldPosition;
- (_Bool)zombieEmbed;
- (void)setZombieEmbed:(_Bool)arg1;
- (_Bool)resultDirty;
- (void)setResultDirty:(_Bool)arg1;
- (_Bool)resultEdited;
- (void)setResultEdited:(_Bool)arg1;
- (_Bool)privateResult;
- (void)setPrivateResult:(_Bool)arg1;

@end
