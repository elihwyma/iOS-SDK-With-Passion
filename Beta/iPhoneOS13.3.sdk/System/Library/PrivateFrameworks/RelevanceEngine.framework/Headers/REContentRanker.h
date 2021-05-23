/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REContentRanker : NSObject

{
    struct REContentFeatureExtractor _extractor;
}

@property (nonatomic, readonly) NSString *positiveContent;
@property (nonatomic, readonly) NSString *negativeContent;

- (id)init;
- (id).cxx_construct;
- (id)predict:(id)arg1;
- (_Bool)load:(id)arg1 error:(id *)arg2;
- (_Bool)save:(id)arg1 error:(id *)arg2;
- (_Bool)train:(id)arg1 isPositive:(_Bool)arg2;
- (long long)positiveMapSize;
- (long long)negativeMapSize;

@end
