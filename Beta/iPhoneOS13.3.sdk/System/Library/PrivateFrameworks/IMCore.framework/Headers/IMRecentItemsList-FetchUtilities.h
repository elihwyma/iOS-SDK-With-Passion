/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMRecentItemsList.h>

@interface IMRecentItemsList (FetchUtilities)

- (void)loadRecentHandwritingsAndStickersWithThumbnailSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadRecentHandwritingsWithThumbnailSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadRecentStickers:(CDUnknownBlockType)arg1;

@end
