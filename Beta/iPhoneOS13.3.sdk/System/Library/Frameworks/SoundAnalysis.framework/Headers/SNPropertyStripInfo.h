/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SNPropertyStripInfo : SNDSPItemInfo

{
    NSString *_path;
    NSString *_resourcePath;
    NSDictionary *_value;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) NSDictionary *value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
