/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSSmartQuoteOptions : NSObject <Swift>

{
    NSString *_leftSingleQuote;
    NSString *_rightSingleQuote;
    NSString *_apostrophe;
    NSString *_leftDoubleQuote;
    NSString *_rightDoubleQuote;
}

@property (copy, readonly) NSString *leftSingleQuote;
@property (copy, readonly) NSString *rightSingleQuote;
@property (copy, readonly) NSString *apostrophe;
@property (copy, readonly) NSString *leftDoubleQuote;
@property (copy, readonly) NSString *rightDoubleQuote;

+ (_Bool)supportsSecureCoding;
+ (id)smartQuoteOptionsForLocale:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftSingleQuote:(id)arg1 rightSingleQuote:(id)arg2 apostrophe:(id)arg3 leftDoubleQuote:(id)arg4 rightDoubleQuote:(id)arg5;

@end
