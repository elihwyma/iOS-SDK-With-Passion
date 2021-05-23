/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSDictionary, NSMutableDictionary;

@interface PIExportImageMetadataBuilder : PIExportMetadataBuilder

{
    NSMutableDictionary *_iptcMutableDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *iptcMutableDictionary;
@property (copy, nonatomic, readonly) NSDictionary *iptcDictionary;

+ (id)_dateFormatterTemplate;
+ (id)_gpsTimeFormatter;
+ (id)_gpsDateFormatter;
+ (id)gpsDictionaryForLocation:(id)arg1;
+ (id)iptcTimeFormatter;
+ (id)iptcDateFormatter;

- (id)init;
- (void)setTitle:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setPeopleNames:(id)arg1;
- (void)setCreationDate:(id)arg1 timeZone:(id)arg2;
- (void)_updateCreationDate;

@end
