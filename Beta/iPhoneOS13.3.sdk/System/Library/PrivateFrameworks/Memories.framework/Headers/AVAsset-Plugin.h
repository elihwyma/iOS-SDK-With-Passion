/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <AVFoundation/AVAsset.h>

@interface AVAsset (Plugin)

+ (id)assetWithIdentifierURL:(id)arg1;
+ (void)setPluginEditedAsset:(id)arg1;
+ (id)pluginEditedAsset;

- (id)creationDateFromMetadata;

@end
