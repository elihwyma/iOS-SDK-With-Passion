/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

#import <FileProvider/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSString;

@protocol NSFileProviderItemFlags;

__attribute__((visibility("hidden")))
@interface FPNSFileProviderItemHelper : NSObject <Swift>

{
    NSString *itemIdentifier;
    NSString *parentItemIdentifier;
    NSString *filename;
    NSString *typeIdentifier;
    unsigned long long capabilities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *itemIdentifier;
@property (copy, nonatomic, readonly) NSString *parentItemIdentifier;
@property (copy, nonatomic, readonly) NSString *filename;
@property (copy, nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) id <NSFileProviderItemFlags> flags;
@property (copy, nonatomic, readonly) NSNumber *documentSize;
@property (copy, nonatomic, readonly) NSNumber *childItemCount;
@property (copy, nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) NSDate *contentModificationDate;
@property (nonatomic, readonly) NSDictionary *extendedAttributes;
@property (copy, nonatomic, readonly) NSDate *lastUsedDate;
@property (copy, nonatomic, readonly) NSData *tagData;
@property (copy, nonatomic, readonly) NSNumber *favoriteRank;
@property (nonatomic, readonly, getter=isTrashed) _Bool trashed;
@property (nonatomic, readonly, getter=isUploaded) _Bool uploaded;
@property (nonatomic, readonly, getter=isUploading) _Bool uploading;
@property (copy, nonatomic, readonly) NSError *uploadingError;
@property (nonatomic, readonly, getter=isDownloaded) _Bool downloaded;
@property (nonatomic, readonly, getter=isDownloading) _Bool downloading;
@property (copy, nonatomic, readonly) NSError *downloadingError;
@property (nonatomic, readonly, getter=isExcludedFromSync) _Bool excludedFromSync;
@property (nonatomic, readonly, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property (nonatomic, readonly, getter=isShared) _Bool shared;
@property (nonatomic, readonly, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (nonatomic, readonly) NSData *versionIdentifier;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (_Bool)fp_isWritable;
- (id)fp_downloadingStatus;
- (_Bool)fp_isReadable;
- (id)fp_sharingCurrentUserRole;
- (id)fp_sharingCurrentUserPermissions;

@end
