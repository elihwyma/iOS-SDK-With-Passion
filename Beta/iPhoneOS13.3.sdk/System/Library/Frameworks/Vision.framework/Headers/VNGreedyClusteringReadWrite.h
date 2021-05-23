/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNGreedyClusteringReadOnly.h>

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly

{
    struct shared_ptr<vision::mod::FaceClustering> m_ClusteringImpl;
}

- (id).cxx_construct;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferAbstract *)arg1 facesToMove:(vector_22dfb71c *)arg2 requestRevision:(unsigned long long)arg3;

@end
