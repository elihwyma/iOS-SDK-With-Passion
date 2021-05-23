/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@class NSFormatter;

@protocol NSCopying><NSSecureCoding><NSObject;

__attribute__((visibility("hidden")))
@interface _NSStringProxyForContext : NSString

{
    NSString *_string;
    NSFormatter *_formatter;
    id <NSCopying><NSSecureCoding><NSObject> _item;
}

@property (copy) NSString *string;
@property (copy) NSFormatter *formatter;
@property (copy) id item;

- (void)dealloc;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2;
- (void)_retainFormatter:(id)arg1;

@end
