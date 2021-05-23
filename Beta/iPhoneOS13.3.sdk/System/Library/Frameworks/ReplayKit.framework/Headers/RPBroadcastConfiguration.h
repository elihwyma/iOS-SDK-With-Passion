/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

#import <ReplayKit/Swift-Protocol.h>

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <Swift>

{
    double _clipDuration;
    NSDictionary *_videoCompressionProperties;
}

@property (nonatomic) double clipDuration;
@property (retain, nonatomic) NSDictionary *videoCompressionProperties;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
