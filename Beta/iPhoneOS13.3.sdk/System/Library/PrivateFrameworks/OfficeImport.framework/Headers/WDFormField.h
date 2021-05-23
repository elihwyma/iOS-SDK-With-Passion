/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFormField : WDRun

{
    unsigned int mPosition;
    _Bool mLinkAbsolute;
    _Bool mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}

- (id)description;
- (unsigned int)position;
- (id)namedLocation;
- (void)setPosition:(unsigned int)arg1;
- (id)URI;
- (void)setURI:(id)arg1;
- (id)initWithParagraph:(id)arg1;
- (void)setNamedLocation:(id)arg1;
- (int)runType;
- (_Bool)linkAbsolute;
- (void)setLinkAbsolute:(_Bool)arg1;
- (_Bool)linkSpecifyingNamedLocation;
- (void)setLinkSpecifyingNamedLocation:(_Bool)arg1;
- (id)macName;
- (void)setMacName:(id)arg1;
- (id)dosName;
- (void)setDosName:(id)arg1;

@end
