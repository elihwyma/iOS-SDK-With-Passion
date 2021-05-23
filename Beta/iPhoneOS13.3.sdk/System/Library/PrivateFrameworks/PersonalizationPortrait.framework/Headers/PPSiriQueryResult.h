/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface PPSiriQueryResult : NSObject

{
    NSString *_qid;
    NSString *_domain;
    NSNumber *_confidence;
}

@property (nonatomic, readonly) NSString *qid;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSNumber *confidence;

+ (id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;
- (_Bool)isEqualToSiriQueryResult:(id)arg1;

@end
