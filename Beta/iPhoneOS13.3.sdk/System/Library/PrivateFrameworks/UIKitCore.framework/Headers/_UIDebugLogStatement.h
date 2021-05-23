/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugLogStatement : NSObject

{
    long long _type;
    unsigned long long _indentLevel;
    NSString *_prefix;
    NSString *_text;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long indentLevel;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *text;

- (id)init;

@end
