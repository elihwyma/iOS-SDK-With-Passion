/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class VMUDebugTimer;

@protocol VMUCommonGraphInterface, VMUStackLogReader;

@interface VMUStackLogConsolidator : NSObject

{
    id <VMUCommonGraphInterface> _graph;
    id <VMUStackLogReader> _stackLogReader;
    VMUDebugTimer *_debugTimer;
}

@property (retain, nonatomic) VMUDebugTimer *debugTimer;

- (id)stackIDsToNodesWithFilter:(CDUnknownBlockType)arg1;
- (id)initWithGraph:(id)arg1 stackLogReader:(id)arg2;
- (id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(CDUnknownBlockType)arg2;

@end
