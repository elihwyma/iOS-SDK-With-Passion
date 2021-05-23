/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface AVTAvatarListImageItem : NSObject

{
    UIImage *_image;
    NSString *_title;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 imageHandler:(CDUnknownBlockType)arg2 viewHandler:(CDUnknownBlockType)arg3;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 viewHandler:(CDUnknownBlockType)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2;

@end
