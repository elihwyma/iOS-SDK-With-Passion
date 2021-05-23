/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSString *frameId;
@property (copy, nonatomic) NSString *sourceURL;
@property (nonatomic) long long origin;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool isInline;
@property (nonatomic) double startLine;
@property (nonatomic) double startColumn;

- (id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(_Bool)arg6 isInline:(_Bool)arg7 startLine:(double)arg8 startColumn:(double)arg9;

@end
