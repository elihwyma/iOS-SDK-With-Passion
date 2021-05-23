/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CUIKUserOperation : NSObject

{
    _Bool _inverseOperationPrecomputed;
    NSArray *_objects;
    long long _span;
    NSArray *_originalObjects;
    NSArray *_originalSliceDescriptions;
    NSString *_precomputedActionName;
    CUIKUserOperation *_precomputedInverseOperation;
}

@property (retain) NSArray *objects;
@property long long span;
@property (retain) NSArray *originalObjects;
@property (retain) NSArray *originalSliceDescriptions;
@property (retain) NSString *precomputedActionName;
@property (retain) CUIKUserOperation *precomputedInverseOperation;
@property _Bool inverseOperationPrecomputed;

@end
