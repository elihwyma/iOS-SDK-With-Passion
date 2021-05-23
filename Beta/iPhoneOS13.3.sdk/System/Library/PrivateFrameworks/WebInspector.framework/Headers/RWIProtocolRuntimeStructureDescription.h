/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *optionalFields;
@property (copy, nonatomic) NSString *constructorName;
@property (retain, nonatomic) RWIProtocolRuntimeStructureDescription *prototypeStructure;
@property (nonatomic) _Bool isImprecise;

@end
