/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIAssetManaging <Swift>

@property (copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock;

- (unsigned short)enabledInputModes;
- (unsigned short)assetContentItemsWithContentType:inputMode: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAssetDownloadForLanguage:completion: /* Error: Ran out of types for this method. */;

@end
