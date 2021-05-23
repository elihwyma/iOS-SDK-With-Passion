/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject

{
    NSArray *_portTypes;
    NSDictionary *_portTypeToFrameStatistics;
    CDStruct_252df2d9 *_frameStatisticsStoragesForPortTypes;
    unsigned long long _frameCount;
}

@property (nonatomic, readonly) NSArray *portTypes;
@property (nonatomic, readonly) unsigned long long frameCount;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reset;
- (void)copyTo:(id)arg1;
- (id)initWithPortTypes:(id)arg1;
- (void)_setFrameCount:(unsigned long long)arg1;
- (void)updateWithFrameMetadata:(id)arg1 updateFocusDistance:(_Bool)arg2;

@end
