/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSDate, NSString;

@interface PHAssetComment : PHObject

{
    _Bool _isLike;
    _Bool _isCaption;
    _Bool _isBatchComment;
    _Bool _isMyComment;
    _Bool _canBeDeletedByUser;
    _Bool _isDeletable;
    _Bool _isInterestingToUser;
    NSString *_commentText;
    NSDate *_commentDate;
    NSDate *_commentClientDate;
    NSString *_cloudGUID;
    NSString *_commenterHashedPersonID;
}

@property (nonatomic, readonly) _Bool isDeletable;
@property (nonatomic, readonly) NSDate *commentClientDate;
@property (nonatomic, readonly) NSString *cloudGUID;
@property (nonatomic, readonly) NSString *commenterHashedPersonID;
@property (nonatomic, readonly) _Bool isInterestingToUser;
@property (nonatomic, readonly) _Bool isLike;
@property (nonatomic, readonly) _Bool isCaption;
@property (nonatomic, readonly) _Bool isBatchComment;
@property (nonatomic, readonly) _Bool isMyComment;
@property (nonatomic, readonly) NSString *commentText;
@property (nonatomic, readonly) NSDate *commentDate;
@property (nonatomic, readonly) NSString *commenterEmail;
@property (nonatomic, readonly) NSString *commenterFirstName;
@property (nonatomic, readonly) NSString *commenterLastName;
@property (nonatomic, readonly) NSString *commenterFullName;
@property (nonatomic, readonly) _Bool isInterestingForAlbumsSorting;
@property (nonatomic, readonly) NSString *commenterDisplayName;
@property (nonatomic, readonly) _Bool canBeDeletedByUser;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (id)personInfoManager;
- (_Bool)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(_Bool *)arg2;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (_Bool)_isInterestingToUser:(id)arg1;

@end
