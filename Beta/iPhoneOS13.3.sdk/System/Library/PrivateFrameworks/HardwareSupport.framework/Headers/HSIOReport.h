/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface HSIOReport : NSObject

{
    NSDictionary *_reportDictionary;
    NSArray *_channelDescriptions;
}

@property (retain, nonatomic) NSDictionary *reportDictionary;
@property (retain, nonatomic) NSArray *channelDescriptions;

+ (id)report:(id *)arg1;
+ (id)reportWithOnlySimpleChannels:(id *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)snapshot:(id *)arg1;
- (id)initWithReportDictionary:(id)arg1;
- (_Bool)isEqualToReport:(id)arg1;
- (id)reportByFilteringChannels:(CDUnknownBlockType)arg1;
- (id)reportWithOnlySimpleChannels;

@end
