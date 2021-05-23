/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject

{
    NSArray *_valueFilters;
}

@property (nonatomic, readonly) NSArray *valueFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithValueFilters:(id)arg1;
- (void)filterPropertyValuesFromContact:(id)arg1;
- (id)contactByFilteringOutPropertyValueOfContact:(id)arg1;

@end
