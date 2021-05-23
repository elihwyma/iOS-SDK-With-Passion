/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphHighlightNode;

@interface PGGraphHighlightChange : PGGraphChange

{
    NSString *_highlightLocalIdentifier;
    PGGraphHighlightNode *_highlightNode;
    unsigned long long _updateTypes;
}

@property (nonatomic, readonly) NSString *highlightLocalIdentifier;
@property (retain, nonatomic) PGGraphHighlightNode *highlightNode;
@property (nonatomic, readonly) unsigned long long updateTypes;

- (id)description;
- (unsigned long long)type;
- (void)mergeChange:(id)arg1;
- (id)initWithHighlightLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2;

@end
