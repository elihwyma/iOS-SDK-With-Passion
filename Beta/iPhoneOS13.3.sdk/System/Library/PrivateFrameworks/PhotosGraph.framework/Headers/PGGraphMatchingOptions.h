/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface PGGraphMatchingOptions : NSObject

{
    _Bool _needsKeywords;
    unsigned short _targetEventDomain;
    unsigned long long _relatedType;
    NSSet *_focusedNodes;
    NSArray *_sortDescriptors;
}

@property (nonatomic) unsigned long long relatedType;
@property (nonatomic) unsigned short targetEventDomain;
@property (retain, nonatomic) NSSet *focusedNodes;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) _Bool needsKeywords;

+ (unsigned short)defaultTargetEventDomain;
+ (id)optionsWithRelatedType:(unsigned long long)arg1;

- (id)init;

@end
