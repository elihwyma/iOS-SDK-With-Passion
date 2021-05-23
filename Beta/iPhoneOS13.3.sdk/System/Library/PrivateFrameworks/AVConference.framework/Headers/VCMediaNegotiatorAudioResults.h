/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioResults : NSObject

{
    unsigned int _remoteSSRC;
    unsigned int _audioUnitModel;
    _Bool _allowRecording;
    _Bool _allowSwitching;
    int _primaryPayload;
    int _dtxPayload;
    int _redPayload;
    NSMutableArray *_secondaryPayloads;
    _Bool _useSBR;
}

@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) _Bool allowRecording;
@property (nonatomic) _Bool allowSwitching;
@property (nonatomic) int primaryPayload;
@property (nonatomic) int dtxPayload;
@property (nonatomic) int redPayload;
@property (nonatomic, readonly) NSArray *secondaryPayloads;
@property (nonatomic) _Bool useSBR;

- (id)init;
- (void)dealloc;
- (void)addSecondaryPayload:(int)arg1;

@end
