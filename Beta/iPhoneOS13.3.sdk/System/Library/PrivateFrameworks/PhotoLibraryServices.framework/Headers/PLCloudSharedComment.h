/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, PLCloudFeedCommentsEntry, PLManagedAsset;

@interface PLCloudSharedComment : PLManagedObject

@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *commenterHashedPersonID;
@property (retain, nonatomic) NSNumber *isDeletable;
@property (retain, nonatomic) NSNumber *isLike;
@property (retain, nonatomic) NSNumber *isCaption;
@property (retain, nonatomic) NSNumber *isBatchComment;
@property (retain, nonatomic) NSNumber *isMyComment;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSDate *commentDate;
@property (retain, nonatomic) NSDate *commentClientDate;
@property (retain, nonatomic) PLManagedAsset *commentedAsset;
@property (retain, nonatomic) PLManagedAsset *likedAsset;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry;
@property (nonatomic, readonly) _Bool isLikeBoolValue;
@property (weak, nonatomic, readonly) NSString *commenterEmail;
@property (weak, nonatomic, readonly) NSString *commenterFirstName;
@property (weak, nonatomic, readonly) NSString *commenterLastName;
@property (weak, nonatomic, readonly) NSString *commenterFullName;
@property (weak, nonatomic, readonly) PLCloudFeedCommentsEntry *cloudFeedEntry;
@property (retain, nonatomic) NSString *commentType;

+ (id)entityName;
+ (id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(_Bool)arg4 isMyComment:(_Bool)arg5 inLibrary:(id)arg6;
+ (id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2;

- (id)init;
- (id)asset;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (_Bool)_isInterestingToUser;
- (_Bool)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(_Bool *)arg2;
- (_Bool)isInterestingForAlbumsSorting;
- (id)commenterDisplayName;
- (_Bool)canBeDeletedByUser;

@end
