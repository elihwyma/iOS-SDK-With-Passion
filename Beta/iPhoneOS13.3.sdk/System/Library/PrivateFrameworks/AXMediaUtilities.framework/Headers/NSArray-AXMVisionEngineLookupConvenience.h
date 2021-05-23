/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSArray.h>

@class AXMVisionFeature;

@interface NSArray (AXMVisionEngineLookupConvenience)

@property (nonatomic, readonly) NSArray *axm_featuresSortedByConfidence;
@property (nonatomic, readonly) AXMVisionFeature *axm_featureWithHighestConfidence;

@end
