/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CKMeCardSharingNicknameAvatarProvider : NSObject

{
    NSData *_imageData;
}

@property (nonatomic, readonly) NSData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithImageData:(id)arg1;
- (void)generateAvatarImageOfSize:(struct CGSize)arg1 imageHandler:(CDUnknownBlockType)arg2;

@end
