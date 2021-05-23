/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSPredicate, NSString, PKOSVersionRequirementRange;

@interface PKRule : NSObject <Swift>

{
    NSString *_identifier;
    NSPredicate *_predicate;
    PKOSVersionRequirementRange *_osVersionRequirementRange;
    NSString *_predicateFormat;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *predicateFormat;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRequirementRange;
@property (nonatomic, readonly) NSPredicate *predicate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 predicateFormat:(id)arg2 osVersionRequirementRange:(id)arg3;
- (void)parsePredicateFormat;

@end
