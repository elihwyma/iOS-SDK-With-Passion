/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGViewPayload.h>

@interface PXGDecorationViewPayload : PXGViewPayload

{
    long long _decorationOptions;
}

@property (nonatomic, readonly) long long decorationOptions;

- (id)initWithDecorationOptions:(unsigned long long)arg1 viewClass:(Class)arg2 userData:(id)arg3;

@end
