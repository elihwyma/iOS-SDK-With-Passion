/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSUnit : NSObject <Swift>

{
    NSString *_symbol;
}

@property (readonly) Class _effectiveUnitClass;
@property (copy, readonly) NSString *symbol;

+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1;

@end
