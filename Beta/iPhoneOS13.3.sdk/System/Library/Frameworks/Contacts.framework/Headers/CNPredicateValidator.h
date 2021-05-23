/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSMutableSet, NSPredicate, NSSet;

@interface CNPredicateValidator : NSObject

{
    _Bool _validated;
    NSPredicate *_predicate;
    NSSet *_allowedKeysSet;
    NSMutableSet *_usedKeysSet;
    NSError *_error;
}

@property (retain, nonatomic) NSSet *allowedKeysSet;
@property (retain, nonatomic) NSMutableSet *usedKeysSet;
@property (nonatomic) _Bool validated;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *allowedKeys;
@property (copy, nonatomic, readonly) NSArray *usedKeys;

- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (_Bool)validateWithError:(id *)arg1;
- (void)resetUsedKeys;

@end
