/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXJSONObjectMerger;

@protocol SXConditionValidating;

@interface SXConditionalObjectResolver : NSObject

{
    SXJSONObjectMerger *_objectMerger;
    id <SXConditionValidating> _conditionValidator;
}

@property (nonatomic, readonly) id <SXConditionValidating> conditionValidator;
@property (nonatomic, readonly) SXJSONObjectMerger *objectMerger;

- (id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2;
- (id)resolveObjects:(id)arg1 context:(id)arg2;

@end
