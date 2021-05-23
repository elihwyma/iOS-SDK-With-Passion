/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPStringFormat : NSObject

{
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float *mTabStops;
    int mTrimming;
}

- (id)init;
- (void)dealloc;
- (int)alignment;
- (const float *)tabStops;
- (void)setAlignment:(int)arg1;
- (void)setTrimming:(int)arg1;
- (unsigned int)formatFlags;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setLineAlignment:(int)arg1;
- (void)setDigitSubstitutionLanguage:(unsigned short)arg1;
- (void)setDigitSubstitutionMethod:(int)arg1;
- (void)setFirstTabOffset:(float)arg1;
- (void)setHotkeyPrefix:(int)arg1;
- (void)setTabStops:(const float *)arg1 count:(int)arg2;
- (int)tabStopCount;
- (float)firstTabOffset;
- (int)lineAlignment;
- (int)trimming;
- (unsigned short)digitSubstitutionLanguage;
- (int)digitSubstitutionMethod;
- (int)hotkeyPrefix;

@end
