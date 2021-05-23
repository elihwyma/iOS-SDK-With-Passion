/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *aliases;
@property (copy, nonatomic) NSArray *longhands;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic) _Bool inherited;

- (id)initWithName:(id)arg1;

@end
