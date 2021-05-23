/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMFComposeRecipient.h>

@class NSString;

@interface PXMFRecipientSearchResult : PXMFComposeRecipient

{
    long long _validationType;
}

@property (nonatomic) long long validationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
