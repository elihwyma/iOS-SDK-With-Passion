/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCTopicalNode;

@interface FCTopicalEdge : NSObject

{
    _Bool _relatednessCalculated;
    FCTopicalNode *_a;
    FCTopicalNode *_b;
    unsigned long long _containsAButNotB;
    unsigned long long _containsAAndB;
    unsigned long long _containsBButNotA;
}

@property (retain, nonatomic) FCTopicalNode *a;
@property (retain, nonatomic) FCTopicalNode *b;
@property (nonatomic) _Bool relatednessCalculated;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic) unsigned long long containsAButNotB;
@property (nonatomic) unsigned long long containsAAndB;
@property (nonatomic) unsigned long long containsBButNotA;
@property (nonatomic, readonly) unsigned long long totalObservations;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)independentCountForNode:(id)arg1;
- (void)calculateRelatedness;
- (id)initWithNode:(id)arg1 andNode:(id)arg2;

@end
