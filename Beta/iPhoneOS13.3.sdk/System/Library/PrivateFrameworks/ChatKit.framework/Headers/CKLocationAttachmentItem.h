/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAttachmentItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKLocationAttachmentItem : CKAttachmentItem

{
    NSString *_locationTitle;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic) NSString *locationTitle;

+ (id)UTITypes;

- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1;
- (id)vCardURLProperties;
- (_Bool)isDroppedPin;

@end
