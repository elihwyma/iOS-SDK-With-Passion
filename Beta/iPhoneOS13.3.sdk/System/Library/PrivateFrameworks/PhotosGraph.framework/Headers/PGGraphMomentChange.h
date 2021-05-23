/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange

{
    NSString *_momentLocalIdentifier;
    PGGraphMomentNode *_momentNode;
    unsigned long long _updateTypes;
}

@property (nonatomic, readonly) NSString *momentLocalIdentifier;
@property (retain, nonatomic) PGGraphMomentNode *momentNode;
@property (nonatomic, readonly) unsigned long long updateTypes;

- (id)description;
- (unsigned long long)type;
- (id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2;
- (void)mergeChange:(id)arg1;

@end
