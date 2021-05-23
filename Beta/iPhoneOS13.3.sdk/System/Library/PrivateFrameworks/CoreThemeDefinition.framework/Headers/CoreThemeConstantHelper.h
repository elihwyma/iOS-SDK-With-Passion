/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CoreThemeConstantHelper : NSObject

{
    unsigned long long _identifier;
    NSString *_label;
    NSString *_displayName;
}

+ (id)helperForStructAtIndex:(long long)arg1 inAssociatedGlobalList:(void *)arg2;

- (void)dealloc;
- (id)description;
- (long long)identifier;
- (id)displayName;
- (id)label;

@end
