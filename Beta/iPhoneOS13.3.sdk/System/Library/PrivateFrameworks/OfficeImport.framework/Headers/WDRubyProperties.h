/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WDRubyProperties : NSObject

{
    unsigned int mOriginal:1;
    CDStruct_1cdbed2b *mOriginalProperties;
}

@property (nonatomic) int alignment;
@property (nonatomic) unsigned short phoneticGuideFontSize;
@property (nonatomic) unsigned short baseFontSize;
@property (nonatomic) unsigned short distanceBetween;
@property (nonatomic) int phoneticGuideLanguage;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)isAnythingOverridden;
- (_Bool)isAlignmentOverridden;
- (_Bool)isAnythingOverriddenIn:(CDStruct_1cdbed2b *)arg1;
- (void)clearAlignment;
- (_Bool)isPhoneticGuideFontSizeOverridden;
- (void)clearPhoneticGuideFontSize;
- (_Bool)isBaseFontSizeOverridden;
- (void)clearBaseFontSize;
- (_Bool)isDistanceBetweenOverridden;
- (void)clearDistanceBetween;
- (_Bool)isPhoneticGuideLanguageOverridden;
- (void)clearPhoneticGuideLanguage;

@end
