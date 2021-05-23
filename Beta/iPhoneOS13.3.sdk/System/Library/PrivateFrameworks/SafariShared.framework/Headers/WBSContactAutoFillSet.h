/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface WBSContactAutoFillSet : NSObject

{
    NSDictionary *_controlIDToValueMap;
    NSString *_label;
    NSArray *_fillDisplayProperties;
    NSArray *_skipDisplayProperties;
    NSSet *_propertiesToFillOrSkip;
}

@property (copy, nonatomic, readonly) NSDictionary *controlIDToValueMap;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSArray *fillDisplayProperties;
@property (copy, nonatomic, readonly) NSArray *skipDisplayProperties;
@property (copy, nonatomic, readonly) NSSet *propertiesToFillOrSkip;

+ (id)displayStringsForSkipMatches:(id)arg1 matchesForForm:(id)arg2 formDataController:(id)arg3;
+ (id)displayStringsForFillMatches:(id)arg1 skipMatches:(id)arg2 matchesForForm:(id)arg3 label:(id)arg4 formDataController:(id)arg5;

- (id)initWithControlIDToValueMap:(id)arg1 label:(id)arg2 fillDisplayProperties:(id)arg3 skipDisplayProperties:(id)arg4 propertiesToFillOrSkip:(id)arg5;

@end
