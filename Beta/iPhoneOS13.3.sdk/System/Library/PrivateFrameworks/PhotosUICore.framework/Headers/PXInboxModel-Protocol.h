/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol PXInboxModel <Swift>

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) long long inboxModelType;
@property (copy, nonatomic, readonly) NSString *inboxModelTitle;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (copy, nonatomic, readonly) NSArray *senderNames;
@property (nonatomic, readonly) _Bool userIsSender;
@property (nonatomic, getter=isSeen) _Bool seen;
@property (nonatomic, readonly) NSArray *leftPreviewItems;
@property (nonatomic, readonly) NSArray *assetsForOneUp;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (nonatomic, readonly) NSString *ownerEmail;
@property (nonatomic, readonly) NSString *keyCommentGUID;

@end
