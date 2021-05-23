/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface AVTAvatarListViewItem : NSObject

{
    UIView *_view;
}

@property (nonatomic, readonly) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 imageHandler:(CDUnknownBlockType)arg2 viewHandler:(CDUnknownBlockType)arg3;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 viewHandler:(CDUnknownBlockType)arg2;

@end
