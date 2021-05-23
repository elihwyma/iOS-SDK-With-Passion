/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UICellAccessoryManager;

@protocol UICellAccessoryLayout <Swift>

@property (weak, nonatomic) UICellAccessoryManager *manager;
@property (nonatomic) double safeAreaInset;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) double minimumCompressionLayoutWidth;

- (unsigned short)prepareLayoutForAccessories:previousAccessories:configurationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)initialFrameForAccessory: /* Error: Ran out of types for this method. */;
- (unsigned short)initialAlphaForAccessory: /* Error: Ran out of types for this method. */;
- (unsigned short)finalFrameForAccessory: /* Error: Ran out of types for this method. */;
- (unsigned short)finalAlphaForAccessory: /* Error: Ran out of types for this method. */;
- (unsigned short)endLayout;

@end
