/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPAudio, NSArray, NSString, NSURL;

@interface LPInlineMediaPlaybackInformation : NSObject

{
    unsigned long long _type;
    NSString *_storeIdentifier;
    NSString *_storefrontIdentifier;
    NSArray *_offers;
    NSURL *_previewURL;
    NSString *_persistentIdentifier;
    LPAudio *_audio;
}

@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSArray *offers;
@property (nonatomic, readonly) _Bool isAvailableForAnonymousDownload;
@property (copy, nonatomic) NSURL *previewURL;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) LPAudio *audio;

- (id)initWithType:(unsigned long long)arg1;
- (unsigned long long)availability;

@end
