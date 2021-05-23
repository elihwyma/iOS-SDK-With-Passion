/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (ICQueryComponents)

@property (nonatomic, readonly) NSURL *ic_uniquedURL;
@property (nonatomic, readonly) _Bool ic_isMapURL;
@property (nonatomic, readonly) _Bool ic_isNewsURL;
@property (nonatomic, readonly) _Bool ic_isiTunesURL;
@property (nonatomic, readonly) _Bool ic_isAppStoreURL;
@property (nonatomic, readonly) _Bool ic_isWebURL;
@property (nonatomic, readonly) _Bool ic_isSupportedAsAttachment;
@property (nonatomic, readonly) NSString *ic_UTI;
@property (nonatomic, readonly) long long ic_fileSize;
@property (nonatomic, readonly) _Bool ic_isReachable;
@property (nonatomic, readonly) _Bool ic_isExcludedFromNonCloudBackups;
@property (nonatomic, readonly) _Bool ic_isExcludedFromCloudBackups;
@property (nonatomic, readonly) _Bool ic_isURLAnInternetLocator;

+ (id)ic_urlFromWeblocFileAtURL:(id)arg1;

- (void)ic_updateFlagToExcludeFromCloudBackup:(_Bool)arg1;
- (id)queryComponents;
- (id)ic_dedupedURLWithProhibitedNames:(id)arg1;

@end
