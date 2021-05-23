/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SFUtilityAdditions)

@property (nonatomic, readonly) NSString *tsu_UTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *downloadTaskDescription;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;
@property (nonatomic, readonly) _Bool needsDownload;

+ (id)properlyEscapedString:(id)arg1;
+ (id)improperlyEscapedString:(id)arg1;
+ (id)relativeURLWithEscapes:(id)arg1;
+ (id)filePathURLWithEscapes:(id)arg1;
+ (_Bool)canHandleDownloadTask:(id)arg1;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;

- (_Bool)isRelative;
- (_Bool)tsu_conformsToUTI:(id)arg1;

@end
