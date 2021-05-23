/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCTextInfo, NSArray;

@interface FCHeadlineTemplate : NSObject <Swift>

{
    FCTextInfo *_headlineTitleTextInfo;
    FCTextInfo *_headlineExcerptTextInfo;
    FCTextInfo *_headlineBylineTextInfo;
    FCColor *_backgroundColor;
    NSArray *_loadableFonts;
}

@property (copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property (copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property (copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property (copy, nonatomic) FCColor *backgroundColor;
@property (copy, nonatomic) NSArray *loadableFonts;

+ (id)_defaultBackgroundColor;
+ (id)_headlineTemplateWithJSON:(id)arg1 versionNumber:(id)arg2;
+ (id)headlineTemplateWithJSON:(id)arg1;
+ (id)templateByMergingTemplate:(id)arg1 intoTemplate:(id)arg2;
+ (id)_defaultTitleTextColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2;
- (void)mergeFromTemplate:(id)arg1;
- (id)_allThemePropertyNames;

@end
