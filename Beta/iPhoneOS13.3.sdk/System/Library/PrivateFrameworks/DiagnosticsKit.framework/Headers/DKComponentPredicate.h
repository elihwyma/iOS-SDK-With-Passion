/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DKComponentPredicate : NSObject

{
    _Bool _exactMatch;
    struct NSString *_type;
    struct NSString *_identifier;
    struct NSString *_domain;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) _Bool exactMatch;

+ (id)componentPredicateWithDomain:(struct NSString *)arg1 exactMatch:(_Bool)arg2;
+ (id)componentPredicateWithType:(struct NSString *)arg1 identifier:(struct NSString *)arg2;
+ (id)componentPredicateMatchingComponentIdentity:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(struct NSString *)arg1 identifier:(struct NSString *)arg2;
- (id)initWithDomain:(struct NSString *)arg1 exactMatch:(_Bool)arg2;
- (_Bool)isEqualToComponentPredicate:(id)arg1;
- (_Bool)matchesComponentIdentity:(id)arg1;

@end
