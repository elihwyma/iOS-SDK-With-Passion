/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@interface PAEKeyerHistogram : NSObject <Swift>

{
    struct ColorHisto *_histogram;
}

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHistogram:(struct ColorHisto *)arg1;
- (struct ColorHisto *)getHistogram;
- (void)setHistogramArray:(id)arg1;

@end
