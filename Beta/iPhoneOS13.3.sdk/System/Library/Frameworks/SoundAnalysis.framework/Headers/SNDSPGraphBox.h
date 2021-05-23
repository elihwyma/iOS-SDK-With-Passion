/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDSPGraphBox : NSObject

{
    struct Box *_box;
    shared_ptr_f6ac7592 _graph;
}

@property (nonatomic, readonly) struct Box *box;
@property (nonatomic, readonly) long long numInputs;
@property (nonatomic, readonly) long long numOutputs;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (id).cxx_construct;
- (id)initWithBox:(struct Box *)arg1 fromGraph:(shared_ptr_f6ac7592)arg2;
- (_Bool)startRecordingPort:(long long)arg1 toFile:(id)arg2;
- (_Bool)stopRecordingPort:(long long)arg1;
- (_Bool)startInjectingPort:(long long)arg1 toFile:(id)arg2 shouldLoop:(_Bool)arg3;
- (_Bool)stopInjectingPort:(long long)arg1;
- (_Bool)getParameterList:(unsigned int *)arg1 numParameterIDs:(long long *)arg2 inScope:(unsigned int)arg3;
- (_Bool)getParameterInfo:(struct AudioUnitParameterInfo *)arg1 forID:(unsigned int)arg2 inScope:(unsigned int)arg3;
- (_Bool)getParameter:(float *)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
- (_Bool)hasParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (_Bool)setParameter:(float)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 bufferOffset:(long long)arg5;

@end
