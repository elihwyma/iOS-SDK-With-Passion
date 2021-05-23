/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject

{
    NSData *_hierarchyData;
}

@property (retain, nonatomic) NSData *hierarchyData;

- (id)initWithHierarchyData:(id)arg1;
- (id)decodeHierarchyWithContainer:(id)arg1 error:(id *)arg2;

@end
