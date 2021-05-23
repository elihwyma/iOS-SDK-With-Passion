/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (nonatomic) _Bool lossless;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) _Bool overflow;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) int size;

- (id)initWithType:(long long)arg1 lossless:(_Bool)arg2;

@end
