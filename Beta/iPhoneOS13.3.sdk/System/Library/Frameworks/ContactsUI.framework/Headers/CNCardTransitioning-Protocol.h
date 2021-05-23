/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class UIImage, UIView;

@protocol CNCardTransitioning <Swift>

@property (nonatomic, readonly) UIView *transitioningView;
@property (nonatomic, readonly) struct CGRect transitioningFrame;
@property (nonatomic, readonly) struct CGRect transitioningContentFrame;
@property (nonatomic, readonly) UIImage *transitioningImage;
@property (nonatomic, readonly) struct CGRect transitioningImageFrame;
@property _Bool transitioningImageVisible;
@property (nonatomic, readonly) UIView *transitioningContentView;

@end
