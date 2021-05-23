/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@protocol NUNode, NUSizer;

@protocol NUComponent <Swift>

@property (nonatomic, readonly) id <NUNode> node;
@property (nonatomic, readonly) id <NUSizer> sizer;

@end
