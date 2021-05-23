/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface TMLValueExpression : NSObject

{
    NSString *_expressionText;
    NSArray *_bindings;
}

@property (nonatomic, readonly) NSString *expressionText;
@property (nonatomic, readonly) NSArray *bindings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithExpressionText:(id)arg1 bindings:(id)arg2;

@end
