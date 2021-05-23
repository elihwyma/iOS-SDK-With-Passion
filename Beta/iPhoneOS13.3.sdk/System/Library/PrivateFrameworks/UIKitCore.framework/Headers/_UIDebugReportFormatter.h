/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugReportFormatter : NSObject

{
    unsigned long long _indentLevel;
    NSString *_indentString;
    unsigned long long _extraBodyIndentLevel;
}

@property (nonatomic) unsigned long long indentLevel;
@property (copy, nonatomic) NSString *indentString;
@property (nonatomic) unsigned long long extraBodyIndentLevel;

+ (id)defaultFormatter;

- (id)init;
- (id)stringFromReportComponents:(id)arg1;

@end
