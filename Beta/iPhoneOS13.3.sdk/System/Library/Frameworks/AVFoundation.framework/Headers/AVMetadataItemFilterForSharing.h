/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataItemFilter.h>

__attribute__((visibility("hidden")))
@interface AVMetadataItemFilterForSharing : AVMetadataItemFilter

+ (void)addKeySpace:(id)arg1 key:(id)arg2 toWhitelistDictionary:(id)arg3;
+ (void)addIdentifier:(id)arg1 toWhitelistDictionary:(id)arg2;

- (id)whitelist;

@end
