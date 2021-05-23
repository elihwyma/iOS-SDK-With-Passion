/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQueryResult.h>

__attribute__((visibility("hidden")))
@interface _LSQueryResultWithPropertyList : _LSQueryResult

{
    id _propertyList;
}

@property (retain, nonatomic, readonly) id propertyList;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyListWithClass:(Class)arg1;
- (id)propertyListWithClass:(Class)arg1 valuesOfClass:(Class)arg2;

@end
