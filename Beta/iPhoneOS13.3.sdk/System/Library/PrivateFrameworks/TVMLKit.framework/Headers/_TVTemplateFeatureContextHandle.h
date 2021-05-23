/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface _TVTemplateFeatureContextHandle : NSObject

{
    id _context;
    long long _rank;
}

@property (nonatomic, readonly) id context;
@property (nonatomic) long long rank;

+ (id)handleWithContext:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
