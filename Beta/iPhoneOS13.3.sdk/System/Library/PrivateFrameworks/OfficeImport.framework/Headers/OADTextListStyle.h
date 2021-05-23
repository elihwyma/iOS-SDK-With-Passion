/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADTextListStyle : NSObject

{
    NSMutableArray *mParagraphProperties;
    NSString *mLanguage;
}

@property (retain, nonatomic) NSString *language;

+ (id)defaultObject;

- (id)init;
- (id)description;
- (id)initWithDefaults;
- (id)defaultProperties;
- (void)flatten;
- (id)propertiesForListLevel:(unsigned long long)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2;
- (void)overrideWithTextStyle:(id)arg1;
- (void)enumerateParagraphPropertiesUsingBlock:(CDUnknownBlockType)arg1;

@end
