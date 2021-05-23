/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXLocationAppCandidate : NSObject

{
    NSString *_bundleIdentifier;
    unsigned long long _eligibility;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long eligibility;

- (id)transportType;
- (id)initWithBundleIdentifier:(id)arg1 eligibility:(unsigned long long)arg2;

@end
