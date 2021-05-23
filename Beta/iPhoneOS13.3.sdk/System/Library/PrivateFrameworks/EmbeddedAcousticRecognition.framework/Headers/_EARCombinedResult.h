/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <EmbeddedAcousticRecognition/_EARSystemResult.h>

@class NSArray;

@interface _EARCombinedResult : _EARSystemResult

{
    NSArray *_nBestStrings;
    NSArray *_nBestSourceIndexes;
    NSArray *_originalRanks;
}

@property (copy, nonatomic) NSArray *nBestStrings;
@property (copy, nonatomic) NSArray *nBestSourceIndexes;
@property (copy, nonatomic) NSArray *originalRanks;

@end
