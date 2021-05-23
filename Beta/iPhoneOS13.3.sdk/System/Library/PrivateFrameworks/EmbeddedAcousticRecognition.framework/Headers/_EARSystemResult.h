/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface _EARSystemResult : NSObject

{
    NSArray *_sausage;
    NSArray *_nBestIndexes;
    NSArray *_confidences;
}

@property (copy, nonatomic) NSArray *sausage;
@property (copy, nonatomic) NSArray *nBestIndexes;
@property (copy, nonatomic) NSArray *confidences;

@end
