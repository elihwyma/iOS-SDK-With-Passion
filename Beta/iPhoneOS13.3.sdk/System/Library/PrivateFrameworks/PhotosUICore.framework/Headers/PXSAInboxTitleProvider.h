/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXSAInboxTitleProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)workQueue;
+ (void)preloadResources;
+ (id)defaultTitleAttributes;
+ (id)emphasizedTitleAttributes;
+ (id)supportingTextAttributes;
+ (id)defaultSubtitleAttributes;

- (void)requestTitleAndSubtitleForModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForModel:(id)arg1;
- (id)subtitleForModel:(id)arg1;
- (id)_titleForCommentWithSectionInfo:(id)arg1;
- (id)_titleForLikeWithSectionInfo:(id)arg1;
- (id)_titleForCoalescedWithSectionInfo:(id)arg1;
- (id)_titleForInvitationResponseWithSectionInfo:(id)arg1 accepted:(_Bool)arg2;

@end
