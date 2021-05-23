/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface AVCAudioPowerSpectrumChannel : NSObject

{
    NSMutableArray *_bins;
}

@property (nonatomic, readonly) NSArray *bins;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry *)arg1 binCount:(unsigned int)arg2;

@end
