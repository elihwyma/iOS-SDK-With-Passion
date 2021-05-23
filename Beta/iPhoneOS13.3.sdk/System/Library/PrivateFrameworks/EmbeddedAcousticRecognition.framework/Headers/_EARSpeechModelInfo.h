/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface _EARSpeechModelInfo : NSObject

{
    struct SpeechModelInfo _speechModelInfo;
}

@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSSet *samplingRates;
@property (nonatomic, readonly) NSSet *tasks;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *phoneSetVersion;
@property (nonatomic, readonly) NSString *acousticProfileVersion;

- (id).cxx_construct;
- (id)initWithConfig:(id)arg1;

@end
