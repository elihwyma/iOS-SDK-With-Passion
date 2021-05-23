/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDraggingSessionConfiguration.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration

{
    long long _dataOwner;
    UIView *_sourceView;
    NSArray *_items;
    struct CGPoint _initialCentroidInSourceWindow;
}

@property (nonatomic) struct CGPoint initialCentroidInSourceWindow;
@property (nonatomic, readonly) long long dataOwner;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic, readonly) NSArray *items;

+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 initialCentroidInSourceWindow:(struct CGPoint)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 accessibilityEndpoint:(id)arg6;
+ (id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5;

- (id)initWithItems:(id)arg1 dataOwner:(long long)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4;

@end
