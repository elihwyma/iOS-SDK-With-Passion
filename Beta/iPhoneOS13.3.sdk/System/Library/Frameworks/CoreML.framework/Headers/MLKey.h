/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSString;

@interface MLKey : NSObject <Swift>

{
    NSString *_name;
    NSString *_scope;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *scope;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)scopedTo:(id)arg1;
- (id)deletingPrefixingScope:(id)arg1;
- (id)initWithKeyName:(id)arg1 scope:(id)arg2;
- (_Bool)hasGlobalScope;
- (_Bool)hasSameNameAsKey:(id)arg1;

@end
