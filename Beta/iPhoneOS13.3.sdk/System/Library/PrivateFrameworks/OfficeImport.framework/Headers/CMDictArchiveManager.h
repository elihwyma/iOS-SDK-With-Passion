/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMStylingArchiveManager.h>

@class NSMutableDictionary, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface CMDictArchiveManager : CMStylingArchiveManager

{
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    _Bool mIsFrameset;
}

- (id)name;
- (unsigned long long)resourceCount;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (void)setIsFrameset;
- (id)copyDictionaryWithSizeInfos:(_Bool)arg1;
- (id)resourceUrlProtocol;

@end
