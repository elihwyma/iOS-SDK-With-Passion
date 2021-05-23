/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXJSONDataTableSelector : SXJSONObject <Swift>

{
    unsigned long long _selectorWeight;
    unsigned long long _numberOfConditions;
}

@property (nonatomic) unsigned long long numberOfConditions;
@property (nonatomic) unsigned long long selectorWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long rowIndex;
@property (nonatomic, readonly) unsigned long long columnIndex;
@property (nonatomic, readonly) NSString *descriptor;

- (id)propertyList;
- (void)commonInit;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONData:(id)arg1 andVersion:(id)arg2;
- (unsigned long long)selectorBooleanForValue:(id)arg1;
- (unsigned long long)weightForSelectorKey:(id)arg1;
- (unsigned long long)evenRowsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)oddRowsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)evenColumnsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)oddColumnsWithValue:(id)arg1 withType:(int)arg2;

@end
