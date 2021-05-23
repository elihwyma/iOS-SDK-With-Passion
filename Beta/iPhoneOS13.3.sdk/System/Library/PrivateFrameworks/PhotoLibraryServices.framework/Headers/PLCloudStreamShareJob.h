/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob

{
    NSArray *_mediaSources;
    NSString *_albumCloudGUID;
    NSString *_albumName;
    NSString *_commentText;
    NSArray *_recipientsInfo;
}

@property (retain, nonatomic) NSArray *mediaSources;
@property (retain, nonatomic) NSString *albumCloudGUID;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSArray *recipientsInfo;

+ (void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3;
+ (void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4;

- (void)run;
- (id)description;
- (void)addInfosForRecipients:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (_Bool)shouldArchiveXPCToDisk;
- (void)executeDaemonOperation;

@end
