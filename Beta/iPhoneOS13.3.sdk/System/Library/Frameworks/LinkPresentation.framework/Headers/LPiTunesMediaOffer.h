/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaOffer : NSObject

{
    _Bool _hasAudio;
    _Bool _hasVideo;
    NSURL *_previewURL;
    NSString *_type;
}

@property (copy, nonatomic, readonly) NSURL *previewURL;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool hasAudio;
@property (nonatomic, readonly) _Bool hasVideo;

+ (id)typeForOffer:(id)arg1;
+ (id)previewURLForOffer:(id)arg1;
+ (_Bool)hasAudioForOffer:(id)arg1;
+ (_Bool)hasVideoForOffer:(id)arg1;

- (id)initWithDictionary:(id)arg1;

@end
