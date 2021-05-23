/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTAvatarAttributeEditorSectionItemPrefetching;

@interface AVTSectionItemLoadingTask : NSObject

{
    _Bool canceled;
    CDUnknownBlockType _completionHandler;
    id <AVTAvatarAttributeEditorSectionItemPrefetching> _sectionItem;
}

@property (copy, nonatomic, readonly) id <AVTAvatarAttributeEditorSectionItemPrefetching> sectionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (getter=isCanceled) _Bool canceled;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (void)cancel;
- (id)initWithSectionItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
