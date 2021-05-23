/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _BRSuffixToTypeMapping : NSObject

{
    NSString *_suffix;
    NSString *_type;
}

@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *type;

- (_Bool)appliesToType:(id)arg1;

@end
