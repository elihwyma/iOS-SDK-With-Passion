/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification

{
    _Bool _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) PLGenericAlbum *album;
@property (nonatomic, readonly) _Bool invitationRecordsDidChange;

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;

- (id)name;
- (id)userInfo;
- (void)_calculateDiffs;

@end
