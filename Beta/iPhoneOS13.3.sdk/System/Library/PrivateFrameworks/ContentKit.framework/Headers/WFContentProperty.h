/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSArray, NSString;

@protocol WFPropertyListObject;

@interface WFContentProperty : NSObject <Swift>

{
    _Bool _multipleValues;
    _Bool _filterable;
    _Bool _sortable;
    _Bool _gettable;
    _Bool _primary;
    _Bool _caseInsensitive;
    _Bool _irrational;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    NSString *_name;
    Class _propertyClass;
    NSArray *_allowedOperators;
    id <WFPropertyListObject> _userInfo;
    NSString *_negativeName;
    NSString *_singularItemName;
    unsigned long long _tense;
    unsigned long long _timeUnits;
    unsigned long long _comparableUnits;
    NSString *_measurementUnitType;
    NSString *_displayName;
    NSArray *_possibleValues;
    CDUnknownBlockType _possibleValuesGetter;
}

@property (nonatomic, readonly) Class valueItemClass;
@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) CDUnknownBlockType possibleValuesGetter;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) Class propertyClass;
@property (nonatomic, readonly) _Bool multipleValues;
@property (nonatomic, readonly, getter=isFilterable) _Bool filterable;
@property (nonatomic, readonly, getter=isSortable) _Bool sortable;
@property (nonatomic, readonly, getter=isGettable) _Bool gettable;
@property (nonatomic, readonly, getter=isPrimary) _Bool primary;
@property (copy, nonatomic, readonly) NSArray *allowedOperators;
@property (copy, nonatomic, readonly) id <WFPropertyListObject> userInfo;
@property (nonatomic, readonly) _Bool hasPossibleValues;
@property (nonatomic, readonly) _Bool caseInsensitive;
@property (copy, nonatomic, readonly) NSString *negativeName;
@property (copy, nonatomic, readonly) NSString *localizedNegativeName;
@property (copy, nonatomic, readonly) NSString *singularItemName;
@property (nonatomic, readonly, getter=isIrrational) _Bool irrational;
@property (nonatomic, readonly) unsigned long long tense;
@property (nonatomic, readonly) unsigned long long timeUnits;
@property (nonatomic, readonly) unsigned long long comparableUnits;
@property (nonatomic, readonly) NSString *measurementUnitType;
@property (nonatomic, readonly) NSString *displayName;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getValuesForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPossibleValues:(CDUnknownBlockType)arg1;
- (id)initWithKeyPath:(id)arg1 block:(CDUnknownBlockType)arg2 name:(id)arg3 propertyClass:(Class)arg4 multipleValues:(_Bool)arg5 filterable:(_Bool)arg6 sortable:(_Bool)arg7 gettable:(_Bool)arg8 primary:(_Bool)arg9 allowedOperators:(id)arg10 userInfo:(id)arg11 possibleValues:(id)arg12 possibleValuesGetter:(CDUnknownBlockType)arg13 caseInsensitive:(_Bool)arg14 negativeName:(id)arg15 singularItemName:(id)arg16 irrational:(_Bool)arg17 tense:(unsigned long long)arg18 timeUnits:(unsigned long long)arg19 comparableUnits:(unsigned long long)arg20 measurementUnitType:(id)arg21 displayName:(id)arg22;
- (void)getValueForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isEquivalentToProperty:(id)arg1;
- (unsigned long long)equivalentHash;

@end
