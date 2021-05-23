/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface _AFDataStoreEntry : NSObject

{
    long long _type;
    id _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id value;

- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)propertyListRepresentation;
- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;
- (id)_valuePropertyListRepresentation;
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;

@end
