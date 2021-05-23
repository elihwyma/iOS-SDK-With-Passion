/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSCachedFetchRequestInfo : NSObject

{
    NSArray *_substVarBindOrdering;
    NSArray *_substIntarrayBindOrdering;
}

@property (retain, nonatomic) NSArray *substitutionBindVariableOrder;
@property (retain, nonatomic) NSArray *substitutionBindIntarrayOrder;

- (void)dealloc;

@end
