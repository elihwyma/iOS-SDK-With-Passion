/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@interface AVAssetTrackSegment : NSObject

{
    CDStruct_82206317 _timeMapping;
}

@property (nonatomic, readonly) CDStruct_82206317 timeMapping;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithTimeMapping:(CDStruct_82206317)arg1;

@end
