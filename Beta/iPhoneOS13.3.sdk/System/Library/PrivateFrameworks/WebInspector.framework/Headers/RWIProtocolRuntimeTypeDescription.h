/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolRuntimeTypeSet;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (nonatomic) _Bool isValid;
@property (copy, nonatomic) NSString *leastCommonAncestor;
@property (retain, nonatomic) RWIProtocolRuntimeTypeSet *typeSet;
@property (copy, nonatomic) NSArray *structures;
@property (nonatomic) _Bool isTruncated;

- (id)initWithIsValid:(_Bool)arg1;

@end
