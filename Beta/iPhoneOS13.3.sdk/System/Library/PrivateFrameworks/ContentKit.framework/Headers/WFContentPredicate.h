/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface WFContentPredicate : NSObject

{
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) NSSet *containedProperties;

+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;
+ (id)truePredicate;
+ (id)falsePredicate;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evaluateWithObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
