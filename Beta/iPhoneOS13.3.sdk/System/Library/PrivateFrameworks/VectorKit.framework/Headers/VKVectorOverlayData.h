/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@protocol VKVectorOverlayDelegate;

@interface VKVectorOverlayData : NSObject

{
    id <VKVectorOverlayDelegate> _delegate;
}

@property (nonatomic, getter=_delegate, setter=_setDelegate:) id <VKVectorOverlayDelegate> delegate;

@end
