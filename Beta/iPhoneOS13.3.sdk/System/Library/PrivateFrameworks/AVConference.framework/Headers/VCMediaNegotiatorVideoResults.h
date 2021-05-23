/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorVideoResults : NSObject

{
    _Bool _isSupported;
    unsigned int _remoteSSRC;
    _Bool _isRTCPFBEnabled;
    VCVideoRuleCollections *_videoRuleCollections;
    NSMutableDictionary *_featureStrings;
    NSMutableDictionary *_parameterSets;
    unsigned int _customVideoWidth;
    unsigned int _customVideoHeight;
    unsigned int _tilesPerFrame;
}

@property (nonatomic) _Bool isSupported;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) _Bool isRTCPFBEnabled;
@property (nonatomic, readonly) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *featureStrings;
@property (retain, nonatomic) NSDictionary *parameterSets;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) unsigned int tilesPerFrame;

- (id)init;
- (void)dealloc;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)addFeatureString:(id)arg1 key:(id)arg2;
- (void)addParameterSet:(id)arg1 key:(id)arg2;

@end
