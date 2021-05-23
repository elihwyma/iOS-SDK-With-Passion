/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CNContact, IMAccount, IMHandle, NSString, UIImage;

@interface CKEntity : NSObject

{
    _Bool _enlargedContactImage;
    UIImage *_transcriptContactImage;
    UIImage *_transcriptDrawerContactImage;
    IMHandle *_handle;
    IMAccount *_chatAccount;
    CNContact *_cnContact;
}

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMAccount *chatAccount;
@property (retain, nonatomic) CNContact *cnContact;
@property (nonatomic, readonly) IMHandle *defaultIMHandle;
@property (nonatomic, readonly) void *abRecord;
@property (nonatomic, readonly) int propertyType;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) _Bool isMe;
@property (copy, nonatomic, readonly) NSString *abbreviatedDisplayName;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *fullName;
@property (copy, nonatomic, readonly) NSString *rawAddress;
@property (copy, nonatomic, readonly) NSString *originalAddress;
@property (copy, nonatomic, readonly) NSString *IDSCanonicalAddress;
@property (copy, nonatomic, readonly) NSString *textToneIdentifier;
@property (copy, nonatomic, readonly) NSString *textVibrationIdentifier;
@property (nonatomic, readonly) UIImage *transcriptContactImage;
@property (nonatomic, readonly) UIImage *transcriptDrawerContactImage;
@property (nonatomic, readonly) UIImage *locationMapViewContactImage;
@property (nonatomic, readonly) UIImage *locationShareBalloonContactImage;
@property (nonatomic) _Bool enlargedContactImage;

+ (id)copyEntityForAddressString:(id)arg1;
+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)contactStoreDidChange:(id)arg1;
- (id)initWithIMHandle:(id)arg1;
- (id)cnContactWithKeys:(id)arg1;
- (id)personViewControllerWithDelegate:(id)arg1 isUnknown:(_Bool *)arg2;
- (id)initWithChat:(id)arg1 imHandle:(id)arg2;
- (id)cnContactWithKeys:(id)arg1 shouldFetchSuggestedContact:(_Bool)arg2;
- (id)_croppedImageFromImageData:(id)arg1;
- (void)_setBusinessInfoForMutableContact:(id)arg1 enlargedImageData:(id)arg2;
- (id)personViewControllerWithDelegate:(id)arg1 isUnknown:(_Bool *)arg2 contactStoreProvider:(id)arg3;

@end
