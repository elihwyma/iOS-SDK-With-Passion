/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage;

@protocol UILargeContentViewerItem <Swift>

@property (nonatomic, readonly) _Bool showsLargeContentViewer;
@property (copy, nonatomic, readonly) NSString *largeContentTitle;
@property (nonatomic, readonly) UIImage *largeContentImage;
@property (nonatomic, readonly) _Bool scalesLargeContentImage;
@property (nonatomic, readonly) struct UIEdgeInsets largeContentImageInsets;

@end
