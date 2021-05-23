/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (nonatomic) double lineNumber;
@property (copy, nonatomic) NSString *lineContent;

- (id)initWithLineNumber:(double)arg1 lineContent:(id)arg2;

@end
