/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (nonatomic) long long pseudoId;
@property (copy, nonatomic) NSArray *matches;

- (id)initWithPseudoId:(long long)arg1 matches:(id)arg2;

@end
