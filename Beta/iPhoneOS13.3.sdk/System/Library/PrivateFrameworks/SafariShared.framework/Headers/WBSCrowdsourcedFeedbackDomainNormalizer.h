/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSValueTransformer.h>

@class NSCharacterSet;

@interface WBSCrowdsourcedFeedbackDomainNormalizer : NSValueTransformer

{
    NSCharacterSet *_dotCharacterSet;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)transformedValue:(id)arg1;

@end
