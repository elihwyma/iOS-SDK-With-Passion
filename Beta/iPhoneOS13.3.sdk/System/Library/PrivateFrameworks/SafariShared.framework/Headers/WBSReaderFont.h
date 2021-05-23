/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSReaderFont : NSObject

{
    NSString *_familyName;
    NSString *_displayName;
    NSString *_localizedName;
    _Bool _hasCalculatedLocalizedName;
    long long _type;
}

@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *familyNameForWebContent;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, getter=isInstalled) _Bool installed;

+ (id)systemSerifFont;
+ (id)systemFontWithDisplayName:(id)arg1;
+ (id)systemFont;
+ (id)fontWithFamilyName:(id)arg1 displayName:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_localizedName;
- (void)isInstalledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)fontOfSize:(double)arg1;
- (id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 type:(long long)arg3;
- (RetainPtr_887fe677)_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(_Bool)arg2;

@end
