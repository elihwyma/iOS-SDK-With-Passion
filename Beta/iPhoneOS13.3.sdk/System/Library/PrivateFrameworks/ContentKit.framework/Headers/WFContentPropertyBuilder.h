/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@protocol WFPropertyListObject;

@interface WFContentPropertyBuilder : NSObject

{
    _Bool _irrational;
    id <WFPropertyListObject> _userInfo;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    NSString *_name;
    Class _propertyClass;
    NSNumber *_multipleValues;
    NSNumber *_filterable;
    NSNumber *_sortable;
    NSNumber *_gettable;
    NSNumber *_primary;
    NSArray *_allowedOperators;
    NSArray *_possibleValues;
    CDUnknownBlockType _possibleValuesGetter;
    NSNumber *_caseInsensitive;
    NSString *_negativeName;
    NSString *_singularItemName;
    NSNumber *_tense;
    NSNumber *_timeUnits;
    NSNumber *_comparableUnits;
    NSString *_measurementUnitType;
    NSString *_displayName;
}

@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class propertyClass;
@property (copy, nonatomic) NSNumber *multipleValues;
@property (copy, nonatomic) NSNumber *filterable;
@property (copy, nonatomic) NSNumber *sortable;
@property (copy, nonatomic) NSNumber *gettable;
@property (copy, nonatomic) NSNumber *primary;
@property (copy, nonatomic) NSArray *allowedOperators;
@property (copy, nonatomic) id <WFPropertyListObject> userInfo;
@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) CDUnknownBlockType possibleValuesGetter;
@property (copy, nonatomic) NSNumber *caseInsensitive;
@property (copy, nonatomic) NSString *negativeName;
@property (copy, nonatomic) NSString *singularItemName;
@property (nonatomic, getter=isIrrational) _Bool irrational;
@property (copy, nonatomic) NSNumber *tense;
@property (copy, nonatomic) NSNumber *timeUnits;
@property (copy, nonatomic) NSNumber *comparableUnits;
@property (copy, nonatomic) NSString *measurementUnitType;
@property (copy, nonatomic) NSString *displayName;

+ (id)keyPath:(id)arg1 name:(id)arg2 class:(Class)arg3;
+ (id)block:(CDUnknownBlockType)arg1 name:(id)arg2 class:(Class)arg3;

- (id)build;
- (id)displayName:(id)arg1;
- (id)negativeName:(id)arg1;
- (id)multipleValues:(_Bool)arg1;
- (id)measurementUnitType:(id)arg1;
- (id)sortable:(_Bool)arg1;
- (id)filterable:(_Bool)arg1;
- (id)gettable:(_Bool)arg1;
- (id)primary:(_Bool)arg1;
- (id)allowedOperators:(id)arg1;
- (id)userInfo:(id)arg1;
- (id)possibleValues:(id)arg1;
- (id)possibleValuesGetter:(CDUnknownBlockType)arg1;
- (id)caseInsensitive:(_Bool)arg1;
- (id)singularItemName:(id)arg1;
- (id)irrational:(_Bool)arg1;
- (id)tense:(unsigned long long)arg1;
- (id)timeUnits:(unsigned long long)arg1;
- (id)comparableUnits:(unsigned long long)arg1;

@end
