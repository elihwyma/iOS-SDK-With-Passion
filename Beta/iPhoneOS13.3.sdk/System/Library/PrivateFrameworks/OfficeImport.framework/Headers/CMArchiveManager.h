/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CMArchiveManager : NSObject

{
    _Bool mIsThumbnail;
    _Bool mIsOnPhone;
    unsigned long long mPageCount;
    NSString *mPassphrase;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    double mCommitInterval;
    _Bool mAutoCommit;
    NSCache *mStyleObjectCache;
    _Bool _noDecorations;
}

@property (copy) NSString *passphrase;
@property _Bool noDecorations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)resourceTypeToExtension:(int)arg1;
+ (int)blipTypeToResourceType:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;

- (id)init;
- (_Bool)isCancelled;
- (unsigned long long)pageCount;
- (void)setPageCount:(unsigned long long)arg1;
- (_Bool)isThumbnail;
- (id)addStyle:(id)arg1;
- (unsigned long long)resourceCount;
- (void)setHTMLWidth:(int)arg1;
- (void)setHTMLHeight:(int)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (_Bool)isOnPhone;
- (_Bool)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)copyResourceWithType:(int)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)addCssStyle:(id)arg1;
- (void)setCommitInterval:(double)arg1;
- (void)setAutoCommit:(_Bool)arg1;
- (id)_validateData:(id)arg1 withType:(int *)arg2;
- (id)addResource:(id)arg1 withName:(id)arg2 type:(int)arg3;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)cachedPathForDrawable:(id)arg1;
- (void)setIsOnPhone:(_Bool)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)cssStylesheetString;
- (void)setResourcePathPrefix:(id)arg1;
- (id)resourcePathPrefix;
- (id)appendResourcePathToName:(id)arg1;
- (void)setIsThumbnail:(_Bool)arg1;
- (_Bool)isProgressive;

@end
