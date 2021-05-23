/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Radio/RadioRequest.h>

@interface RadioLoadStoreBagRequest : RadioRequest

{
    _Bool _ignoresRadioDiskCache;
}

@property (nonatomic) _Bool ignoresRadioDiskCache;

- (void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
