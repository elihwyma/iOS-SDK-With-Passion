/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKAppContext, NSString;

@protocol IKDOMFeature <Swift>

@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (unsigned short)makeFeatureJSObjectForFeature: /* Error: Ran out of types for this method. */;

- (unsigned short)initWithDOMNode:featureName: /* Error: Ran out of types for this method. */;

@end
