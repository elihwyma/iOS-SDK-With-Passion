/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, WFContentPredicate;

@interface WFContentQuery : NSObject

{
    WFContentPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSDictionary *_userInfo;
    struct _WFContentSlice _slice;
}

@property (nonatomic, readonly) WFContentPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) struct _WFContentSlice slice;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic, readonly) NSSet *containedProperties;

- (id)description;
- (id)initWithPredicate:(id)arg1;
- (void)runWithObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runWithObjects:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canEvaluateObjects:(id)arg1 withPropertySubstitutor:(CDUnknownBlockType)arg2;

@end
