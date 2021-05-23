/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeEntryPreview : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *value;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *key;

- (id)initWithValue:(id)arg1;

@end
