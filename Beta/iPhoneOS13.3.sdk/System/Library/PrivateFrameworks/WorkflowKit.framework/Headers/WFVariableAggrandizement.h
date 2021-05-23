/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface WFVariableAggrandizement : NSObject

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)processedContentClasses:(id)arg1;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
