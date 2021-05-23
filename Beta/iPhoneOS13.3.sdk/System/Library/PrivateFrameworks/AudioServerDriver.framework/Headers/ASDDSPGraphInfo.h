/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSArray, NSDictionary, NSString;

@interface ASDDSPGraphInfo : ASDDSPItemInfo

{
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *includePaths;
@property (copy, nonatomic) NSDictionary *substitutions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
