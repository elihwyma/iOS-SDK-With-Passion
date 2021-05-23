/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSNumber, NSString, NSURL;

@interface UNSAttachmentRecord : NSObject

{
    _Bool _thumbnailHidden;
    _Bool _hiddenFromDefaultExpandedView;
    NSString *_identifier;
    unsigned long long _family;
    NSURL *_URL;
    NSString *_type;
    NSNumber *_thumbnailFrameNumber;
    CDStruct_1b6d18a9 _thumbnailTimestamp;
    struct CGRect _thumbnailClippingRect;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long family;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool thumbnailHidden;
@property (nonatomic) struct CGRect thumbnailClippingRect;
@property (copy, nonatomic) NSNumber *thumbnailFrameNumber;
@property (nonatomic) CDStruct_1b6d18a9 thumbnailTimestamp;
@property (nonatomic) _Bool hiddenFromDefaultExpandedView;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
