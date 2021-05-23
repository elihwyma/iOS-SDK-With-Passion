/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface PXSampleInboxModel : NSObject

{
    _Bool _userIsSender;
    _Bool _seen;
    NSDate *_creationDate;
    long long _inboxModelType;
    NSString *_inboxModelTitle;
    unsigned long long _assetsCount;
    NSArray *_senderNames;
    NSArray *_assetsForOneUp;
    long long _type;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *inboxModelTitle;
@property (nonatomic) unsigned long long assetsCount;
@property (copy, nonatomic) NSArray *senderNames;
@property (nonatomic) _Bool userIsSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long inboxModelType;
@property (nonatomic, getter=isSeen) _Bool seen;
@property (nonatomic, readonly) NSArray *leftPreviewItems;
@property (nonatomic, readonly) NSArray *assetsForOneUp;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (nonatomic, readonly) NSString *ownerEmail;
@property (nonatomic, readonly) NSString *keyCommentGUID;

+ (id)oldDate;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
