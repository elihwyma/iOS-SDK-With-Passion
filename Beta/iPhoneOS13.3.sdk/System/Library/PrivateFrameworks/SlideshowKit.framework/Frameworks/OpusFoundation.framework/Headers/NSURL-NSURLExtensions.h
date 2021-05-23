/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSURL.h>

@interface NSURL (NSURLExtensions)

+ (id)_displayName:(id)arg1;
+ (id)_contentModificationDate:(id)arg1;
+ (_Bool)_isInCloud:(id)arg1;
+ (_Bool)_isDownloading:(id)arg1;
+ (_Bool)_isDownloaded:(id)arg1;
+ (_Bool)_isUploading:(id)arg1;
+ (_Bool)_isUploaded:(id)arg1;
+ (_Bool)_hasUnresolvedConflict:(id)arg1;
+ (long long)isHostnameReachable:(id)arg1;
+ (id)parseURLParams:(id)arg1;

- (id)displayName;
- (id)contentModificationDate;
- (_Bool)isUploaded;
- (_Bool)isDownloaded;
- (_Bool)isUploading;
- (_Bool)isDownloading;
- (_Bool)isInCloud;
- (_Bool)hasUnresolvedConflict;

@end
