/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SFNotificationError;

@interface SFNotificationInfo : NSObject

{
    SFNotificationInfo *_cachedMediumBubbleVersion;
    unsigned char _deviceClass;
    unsigned char _interactionBehavior;
    unsigned char _interactionDirection;
    unsigned int _notificationType;
    NSURL *_attachmentURL;
    NSString *_body;
    SFNotificationError *_error;
    NSString *_header;
    NSString *_title;
}

@property (nonatomic, readonly) SFNotificationInfo *mediumBubbleVersion;
@property (nonatomic) unsigned int notificationType;
@property (retain, nonatomic) NSURL *attachmentURL;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) unsigned char deviceClass;
@property (retain, nonatomic) SFNotificationError *error;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) unsigned char interactionBehavior;
@property (nonatomic) unsigned char interactionDirection;
@property (retain, nonatomic) NSString *title;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
