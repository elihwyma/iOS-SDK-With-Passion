/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMChatItem.h>

#import <IMCore/Swift-Protocol.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate, NSString;

@interface IMTranscriptChatItem : IMChatItem <Swift>

{
    NSString *_guid;
    unsigned char _contiguousType;
    unsigned char _attachmentContiguousType;
    unsigned int _contiguousLoaded:1;
}

@property (copy, nonatomic, setter=_setGUID:) NSString *guid;
@property (nonatomic, readonly) unsigned char contiguousType;
@property (nonatomic, readonly) unsigned char attachmentContiguousType;
@property (nonatomic, readonly, getter=isContiguous) _Bool contiguous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isFromMe) _Bool fromMe;
@property (nonatomic, readonly) _Bool wantsTail;
@property (copy, nonatomic, readonly) NSAttributedString *transcriptText;
@property (nonatomic, readonly) NSDate *transcriptDate;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) IMHandle *handle;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isContiguousWithChatItem:(id)arg1;
- (_Bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (_Bool)_isContiguousLoaded;
- (void)_setContiguousLoaded:(_Bool)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;

@end
