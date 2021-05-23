/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface CRCtcBeamState : NSObject

{
    NSMutableDictionary *_mutablePaths;
}

@property (retain, nonatomic) NSMutableDictionary *mutablePaths;
@property (readonly) NSDictionary *paths;

- (id)init;
- (void)addPath:(id)arg1;
- (id)pathForString:(id)arg1;
- (void)kBest:(id *)arg1 discarded:(id *)arg2 k:(unsigned long long)arg3;
- (void)mergePathsWithTrailingWhitespaces;
- (id)sortedKeys;

@end
