/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface PGHobby : NSObject

{
    long long _type;
    NSSet *_persons;
    NSMutableSet *_momentNodes;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSSet *persons;
@property (retain, nonatomic) NSMutableSet *moments;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
