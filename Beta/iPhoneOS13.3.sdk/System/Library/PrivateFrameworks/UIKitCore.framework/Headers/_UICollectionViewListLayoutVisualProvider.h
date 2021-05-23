/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListLayoutVisualProvider : NSObject

{
    long long _appearanceStyle;
}

@property (nonatomic, readonly) NSSet *defaultFloatingElementKinds;

+ (id)visualProviderForAppearanceStyle:(long long)arg1;

- (id)initWithAppearanceStyle:(long long)arg1;
- (void)configureDefaultGradientMaskOnLayout:(id)arg1;

@end
