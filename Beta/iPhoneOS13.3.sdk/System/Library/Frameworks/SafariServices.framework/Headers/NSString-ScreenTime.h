/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSString.h>

@interface NSString (ScreenTime)

@property (nonatomic, readonly) _Bool sf_isConfigProfileMIMEType;
@property (nonatomic, readonly) _Bool sf_isFeedScheme;
@property (nonatomic, readonly) NSString *sf_URLScheme;

+ (id)_sf_safeBrowsingPreferencesPlistPath;

- (id)_sf_bestURLForUserTypedString;
- (id)sf_stringByReplacingMarkupCharactersWithHTMLEntities;
- (id)sf_stringByReplacingLastOccurrenceOfWhitespaceWithANonBreakingSpace;
- (id)_sf_ensurePathExtension:(id)arg1;
- (id)sf_lastPathComponentWithoutZipExtension;

@end
