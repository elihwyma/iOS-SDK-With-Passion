/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSFormatter, NSString;

@protocol NSObject;

@interface HMFAttributeDescription : NSObject

{
    NSString *_name;
    id <NSObject> _value;
    unsigned long long _options;
    NSFormatter *_formatter;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id <NSObject> value;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)shortDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4;

@end
