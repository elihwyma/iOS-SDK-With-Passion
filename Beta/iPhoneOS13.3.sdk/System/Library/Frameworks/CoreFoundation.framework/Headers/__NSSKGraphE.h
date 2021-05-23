/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSSKGraphE : NSObject

{
    struct edge *_edges;
    struct vertex *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}

- (void)dealloc;
- (_Bool)isEmpty;
- (id)initWithNumberOfVertices:(unsigned long long)arg1 numberOfEdges:(unsigned long long)arg2;
- (_Bool)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;
- (unsigned long long)numOfEdges;
- (struct edge **)isAcyclic;

@end
