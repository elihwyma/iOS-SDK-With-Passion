/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UINamedLayerContentProvider;

@protocol UINamedLayerImage <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic) _Bool fixedFrame;
@property (nonatomic, readonly) id <UINamedLayerContentProvider> contentProvider;

@end
