/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@interface LKNamingSimilarity : NSObject

{
    unsigned long long _similarity;
}

@property (nonatomic) unsigned long long similarity;

+ (_Bool)supportsSecureCoding;
+ (id)namingSimilarityWithSimilarity:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLKNamingSimilarity:(id)arg1;

@end
