/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString, NTPBTodaySectionConfigWebEmbed;

@interface NTTodayWebEmbedProtoitem : NSObject

{
    NSString *_identifier;
    NTPBTodaySectionConfigWebEmbed *_webEmbed;
}

@property (copy, nonatomic, readonly) NTPBTodaySectionConfigWebEmbed *webEmbed;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(_Bool)arg2;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 forLeadingCellAppearance:(_Bool)arg6 preferredDynamicSlotAllocation:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 webEmbed:(id)arg2;

@end
