/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SNAUStripInfo : SNDSPItemInfo

{
    NSString *_path;
    NSDictionary *_value;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSDictionary *value;

+ (_Bool)containsOnlyAUStrips:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
