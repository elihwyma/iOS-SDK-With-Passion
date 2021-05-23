/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICLocation.h>

@class ICAttachment, NSString;

@interface ICAttachmentLocation : ICLocation

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool placeUpdated;
@property (retain, nonatomic) ICAttachment *attachment;
@property (nonatomic, readonly) NSString *formattedAddressWithoutAttachmentTitle;

+ (id)newAttachmentLocationForAttachment:(id)arg1;

- (id)targetSearchIndexable;

@end
