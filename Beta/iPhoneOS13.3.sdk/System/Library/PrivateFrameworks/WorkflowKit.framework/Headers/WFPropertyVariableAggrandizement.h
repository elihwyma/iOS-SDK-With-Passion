/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@protocol WFPropertyListObject;

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) id <WFPropertyListObject> propertyUserInfo;
@property (nonatomic, readonly) _Bool negativeProperty;
@property (nonatomic, readonly) NSString *negativePropertyName;

- (id)initWithDictionary:(id)arg1;
- (id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2;
- (id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 negativeProperty:(_Bool)arg3 negativePropertyName:(id)arg4;
- (id)processedContentClasses:(id)arg1;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
