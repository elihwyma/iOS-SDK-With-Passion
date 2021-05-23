/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXCMMSharedAlbumParticipant : NSObject <Swift>

{
    NSString *_emailAddressString;
    NSString *_phoneNumberString;
    NSString *_localizedName;
    NSString *_firstName;
}

@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1;

@end
