/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NPKBalanceField : NSObject

{
    _Bool _isPrimaryBalance;
    NSString *_label;
    NSString *_formattedValue;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool isPrimaryBalance;

- (_Bool)isEqual:(id)arg1;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3 primaryBalance:(_Bool)arg4;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3;

@end
