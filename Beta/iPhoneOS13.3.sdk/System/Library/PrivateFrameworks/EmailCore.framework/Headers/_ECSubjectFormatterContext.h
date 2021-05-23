/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSRegularExpression, NSString;

@interface _ECSubjectFormatterContext : NSObject

{
    _Bool _prefixLastStrongDirectionalityIsLeftToRight;
    NSRegularExpression *_regex;
    NSString *_localizedPrefix;
}

@property (nonatomic, readonly) NSRegularExpression *regex;
@property (copy, nonatomic, readonly) NSString *localizedPrefix;
@property (nonatomic, readonly) _Bool prefixLastStrongDirectionalityIsLeftToRight;

- (id)initWithRegex:(id)arg1 localizedPrefix:(id)arg2;

@end
