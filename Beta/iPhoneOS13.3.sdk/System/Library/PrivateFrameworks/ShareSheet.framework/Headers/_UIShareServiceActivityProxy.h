/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject

{
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;
    Class _remoteClass;
    struct CGSize _thumbnailSize;
    CDUnknownBlockType _didFinishPreparingForExecution;
    CDUnknownBlockType _didFinishPerformingActivityHandler;
}

@property (copy, nonatomic) CDUnknownBlockType didFinishPerformingActivityHandler;
@property (copy, nonatomic) CDUnknownBlockType didFinishPreparingForExecution;

+ (void)forwardInvocation:(id)arg1;
+ (id)activityProxyForServiceActivityDataRequest:(id)arg1;

- (_Bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)activityType;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (id)activityUUID;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activityViewController;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (void)_willBePerformedOrPresented;
- (_Bool)_activitySupportsPromiseURLs;
- (_Bool)_wantsThumbnailItemData;
- (_Bool)_wantsAttachmentURLItemData;
- (_Bool)_wantsInitialSocialText;
- (id)_embeddedActivityViewController;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_managesOwnPresentation;
- (_Bool)_needsResolvedActivityItems;
- (_Bool)allowsEmbedding;
- (_Bool)_isExecutedInProcess;
- (id)initWithUnderlyingActivityItemDataRequest:(id)arg1;

@end
