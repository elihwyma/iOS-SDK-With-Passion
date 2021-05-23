/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXRecipient.h>

@class PHMomentShareParticipant;

@interface PXMomentShareParticipantRecipient : PXRecipient

{
    PHMomentShareParticipant *_momentShareParticipant;
}

@property (nonatomic, readonly) PHMomentShareParticipant *momentShareParticipant;

- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithMomentShareParticipant:(id)arg1;

@end
