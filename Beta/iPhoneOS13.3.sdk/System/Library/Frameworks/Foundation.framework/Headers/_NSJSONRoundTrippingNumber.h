/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NSJSONRoundTrippingNumber : NSObject <Swift>

{
    NSNumber *_number;
    NSString *_representation;
}

+ (_Bool)isSubclassOfClass:(Class)arg1;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;

- (_Bool)isNSNumber__;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (Class)superclass;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNumber:(id)arg1;
- (id)stringValue;
- (_Bool)_allowsDirectEncoding;
- (id)initWithNumber:(id)arg1 representation:(id)arg2;

@end
