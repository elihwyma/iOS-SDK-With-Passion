/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString;

@interface WFSlotIdentifier : NSObject <Swift>

{
    NSString *_key;
    NSString *_parameterKey;
    long long _arrayIndex;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *parameterKey;
@property (nonatomic, readonly) long long arrayIndex;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 parameterKey:(id)arg2 arrayIndex:(long long)arg3;
- (id)identifierBySettingParameterKey:(id)arg1 arrayIndex:(long long)arg2;
- (id)identifierBySettingParameterKey:(id)arg1;
- (id)identifierBySettingArrayIndex:(long long)arg1;

@end
