/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (nonatomic) int typeInformationDescriptor;
@property (copy, nonatomic) NSString *sourceID;
@property (nonatomic) int divot;

- (id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3;

@end
