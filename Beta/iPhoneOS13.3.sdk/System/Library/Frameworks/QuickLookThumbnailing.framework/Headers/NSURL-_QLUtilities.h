/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSURL.h>

@interface NSURL (_QLUtilities)

+ (id)_QLTemporaryURLWithExtension:(id)arg1 openingFileHandle:(int *)arg2 inDirectoryAtURL:(id)arg3;
+ (id)_QLCreateTemporaryReplacementURLForOriginalFileAtURL:(id)arg1 withExtension:(id)arg2 temporaryDirectoryURL:(id *)arg3;

- (_Bool)_QLNeedsDownload;
- (id)_QLUrlFileSize;
- (_Bool)_QLNeedsCoordination;
- (id)_QLFileSize;
- (id)_QLIssueFileExtensionWithSandboxType:(const char *)arg1;

@end
