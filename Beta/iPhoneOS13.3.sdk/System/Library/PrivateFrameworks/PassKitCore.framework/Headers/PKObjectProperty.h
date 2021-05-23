/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKObjectProperty : NSObject

{
    NSString *_name;
    NSString *_variableName;
    Class _aClass;
    unsigned long long _type;
    NSString *_valueGetter;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *variableName;
@property (copy, nonatomic, readonly) Class aClass;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *valueGetter;

- (id)initWithProperty:(struct objc_property *)arg1;

@end
