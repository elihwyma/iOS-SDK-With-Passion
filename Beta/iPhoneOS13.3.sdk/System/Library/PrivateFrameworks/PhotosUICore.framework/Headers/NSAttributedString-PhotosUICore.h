/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (PhotosUICore)

+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3;
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3 italicizedAttributes:(id)arg4;
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)px_stringWithFormat:(id)arg1 defaultAttributes:(id)arg2 arguments:(id)arg3;
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 subjectName:(id)arg2 defaultTextAttributes:(id)arg3 posterTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserPostWithPhotoCount:(long long)arg1 videoCount:(long long)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForPostWithSubjectFullName:(id)arg1 photoCount:(long long)arg2 videoCount:(long long)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)px_localizedAttributedStringForUserCommentWithText:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForCommentWithCommenterFullName:(id)arg1 text:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForLikesFromUser:(_Bool)arg1 otherPeopleFullNames:(id)arg2 isVideo:(_Bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)px_localizedAttributedStringForLikesFromUser:(_Bool)arg1 orPersonFullName:(id)arg2 photoCount:(long long)arg3 videoCount:(long long)arg4 streamName:(id)arg5 defaultTextAttributes:(id)arg6 emphasizedTextAttributes:(id)arg7 italicizedTextAttributes:(id)arg8;
+ (id)px_localizedAttributedStringForLikesWithLikerCount:(long long)arg1 isVideo:(_Bool)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserJoiningStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForUserJoiningSharedAlbumWithName:(id)arg1 defaultTextAttributes:(id)arg2 posterTextAttributes:(id)arg3 albumTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 streamName:(id)arg2 accepted:(_Bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5 streamNameAttributes:(id)arg6;
+ (id)px_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 sharedAlbumName:(id)arg2 accepted:(_Bool)arg3 defaultTextAttributes:(id)arg4 posterTextAttributes:(id)arg5 albumTextAttributes:(id)arg6;
+ (id)px_localizedAttributedStringForUserCreatingStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForUserCreatingSharedAlbumWithName:(id)arg1 defaultTextAttributes:(id)arg2 posterTextAttributes:(id)arg3 albumTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 defaultTextAttributes:(id)arg2 subjectName:(id)arg3;
+ (id)px_localizedAttributedStringForPostAttributionOfAssetWithDisplayType:(long long)arg1 postedByUserOrSubjectWithFullName:(id)arg2 atDate:(id)arg3 nameAttributes:(id)arg4 dateAttributes:(id)arg5;
+ (id)px_localizedAttributedStringForInboxCoalescedCommentsFromUser:(_Bool)arg1 otherPeopleFullNames:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForInboxCoalescedCommentsWithCommenterCount:(long long)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForInboxCoalescedLikesAndCommentsFromUser:(_Bool)arg1 otherPeopleFullNames:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForInboxCoalescedLikesAndCommentsWithCommenterCount:(long long)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForUserInvitedToStreamWithName:(id)arg1 inviterName:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;

- (id)px_attributedStringByApplyingCapitalization:(long long)arg1;
- (id)px_attributedStringWithParagraphLineBreakMode:(long long)arg1;
- (id)px_attributedStringByDeletingCharactersInSet:(id)arg1;
- (id)px_stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)px_bulletPrefixAttributedStringWithBulletAttributes:(id)arg1 isLeftToRight:(_Bool)arg2;
- (_Bool)px_rangeExists:(struct _NSRange)arg1;

@end
