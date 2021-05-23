/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SNDSPGraphInfo : SNDSPItemInfo

{
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *includePaths;
@property (retain, nonatomic) NSDictionary *substitutions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
