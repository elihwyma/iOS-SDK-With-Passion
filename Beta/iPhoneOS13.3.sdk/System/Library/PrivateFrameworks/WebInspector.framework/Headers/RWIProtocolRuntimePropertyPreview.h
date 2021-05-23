/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *valuePreview;
@property (nonatomic) _Bool internal;

- (id)initWithName:(id)arg1 type:(long long)arg2;

@end
