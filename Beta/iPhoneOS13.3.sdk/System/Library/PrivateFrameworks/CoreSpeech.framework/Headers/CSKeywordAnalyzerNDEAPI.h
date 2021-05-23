/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;

@interface CSKeywordAnalyzerNDEAPI : NSObject

{
    void **_ndeObject;
    NSMutableData *_currentBlob;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;
}

@property (nonatomic) unsigned long long activeChannel;
@property (weak, nonatomic) id <CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;

- (void)dealloc;
- (void)reset;
- (id)initWithBlob:(id)arg1;
- (void)processAudioChunk:(id)arg1;

@end
