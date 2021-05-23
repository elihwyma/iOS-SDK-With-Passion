/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject

{
    NSArray *_implementingQueryMethods;
    NSArray *_nonImplementingQueryMethods;
    NSDictionary *_queryMethodsToDescriptions;
}

@property (retain, nonatomic) NSArray *implementingQueryMethods;
@property (retain, nonatomic) NSArray *nonImplementingQueryMethods;
@property (retain, nonatomic) NSDictionary *queryMethodsToDescriptions;

@end
