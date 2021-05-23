/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CSSpeakerModel : NSObject

{
    NSString *_modelFileName;
    NSString *_languageCode;
    NSString *_modelPath;
    NSString *_utteranceDirectory;
    NSString *_tdtiModelPath;
    NSString *_tdtiUtteranceDirectory;
    NSString *_tiModelPath;
    NSString *_tiUtteranceDirectory;
}

@property (nonatomic, readonly) NSString *modelPath;
@property (nonatomic, readonly) NSString *utteranceDirectory;
@property (nonatomic, readonly) NSString *tiModelPath;
@property (nonatomic, readonly) NSString *tiUtteranceDirectory;
@property (nonatomic, readonly) NSString *tdtiModelPath;
@property (nonatomic, readonly) NSString *tdtiUtteranceDirectory;
@property (nonatomic, readonly) NSArray *enrollmentUtterance;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool needsRetrain;

- (void)discard;
- (_Bool)_isDirectoryEmpty:(id)arg1;
- (id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2;

@end
