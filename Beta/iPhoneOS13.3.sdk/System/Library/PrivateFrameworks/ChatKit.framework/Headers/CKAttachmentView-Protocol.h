/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@class CKMediaObject, UIImageView;

@protocol CKAttachmentView <Swift>

@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (nonatomic, readonly) UIImageView *iconImageView;

- (unsigned short)prepareForReuse;
- (unsigned short)prepareForDisplay;

@end
