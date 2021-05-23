/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VKClientLocalizedStrings : NSObject

{
    struct NSDictionary *_stringDictionary;
    NSString *_locale;
}

- (void)dealloc;
- (id)initWithStrings:(struct NSDictionary *)arg1 locale:(id)arg2;
- (void)getTextForKey:(id)arg1 text:(id *)arg2 locale:(id *)arg3;

@end
