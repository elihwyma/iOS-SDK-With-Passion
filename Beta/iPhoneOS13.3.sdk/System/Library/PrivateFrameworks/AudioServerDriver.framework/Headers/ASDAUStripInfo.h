/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSDictionary, NSString;

@interface ASDAUStripInfo : ASDDSPItemInfo

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
