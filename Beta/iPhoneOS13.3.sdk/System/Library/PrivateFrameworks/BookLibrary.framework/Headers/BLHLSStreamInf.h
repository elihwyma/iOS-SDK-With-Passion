/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface BLHLSStreamInf : NSObject

{
    NSURL *_url;
    unsigned long long _bandwidth;
    unsigned long long _averageBandwidth;
    NSString *_codecs;
    NSString *_audio;
}

@property (retain, nonatomic) NSURL *url;
@property (nonatomic, readonly) unsigned long long bandwidth;
@property (nonatomic, readonly) unsigned long long averageBandwidth;
@property (nonatomic, readonly) unsigned long long averageBandwidthFallbackToPeak;
@property (nonatomic, readonly) NSString *codecs;
@property (nonatomic, readonly) NSString *audio;

- (id)description;
- (void)setPropertiesFromAttributeList:(id)arg1;

@end
