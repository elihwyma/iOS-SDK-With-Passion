/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIImage.h>

@interface UIImage (ChatKitAdditions)

+ (id)ckImageNamed:(id)arg1;
+ (id)ckImageWithData:(id)arg1;
+ (id)ckTemplateImageNamed:(id)arg1;
+ (id)ckColorImageOfSize:(struct CGSize)arg1 withColor:(id)arg2;
+ (id)abImageNamed:(id)arg1;
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;
+ (id)badgeIconForImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)placeholderExtensionIcon;

- (void)decode;
- (id)__ck_imageWithOrientation:(long long)arg1;
- (id)ckImageWithTintColor:(id)arg1;
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1 framed:(_Bool)arg2;
- (struct CGRect)__ck_contentsCenter;
- (id)__ck_ASTCRepresentation;
- (id)iconForInterfaceStyle:(long long)arg1;

@end
