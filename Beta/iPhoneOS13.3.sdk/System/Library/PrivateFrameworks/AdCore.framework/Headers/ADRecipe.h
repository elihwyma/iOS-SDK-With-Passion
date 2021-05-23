/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ADRecipe : NSObject

{
    _Bool _isMissingRequiredData;
    NSString *_experimentID;
    NSDictionary *_translationMap;
    NSArray *_testWeights;
    NSNumber *_scalingRatio;
}

@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSDictionary *translationMap;
@property (retain, nonatomic) NSArray *testWeights;
@property (retain, nonatomic) NSNumber *scalingRatio;
@property (nonatomic) _Bool isMissingRequiredData;

- (id)initWithDictionary:(id)arg1;
- (id)translationWeights:(id)arg1;

@end
