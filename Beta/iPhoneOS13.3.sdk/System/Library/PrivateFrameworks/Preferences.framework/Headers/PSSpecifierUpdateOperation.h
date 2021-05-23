/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSNumber, PSSpecifier;

@interface PSSpecifierUpdateOperation : NSObject

{
    _Bool _removingGroupSpecifierRemovesEntireGroup;
    long long _operation;
    PSSpecifier *_specifier;
    NSNumber *_index;
    NSNumber *_toIndex;
}

@property (nonatomic, readonly) long long operation;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *toIndex;
@property (nonatomic) _Bool removingGroupSpecifierRemovesEntireGroup;

+ (id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)_removeOneSpecifierOnlyOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)applyToArray:(id)arg1;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 removingGroupSpecifierRemovesEntireGroup:(_Bool)arg5;
- (id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;

@end
