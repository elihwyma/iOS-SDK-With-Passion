/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSDictionary, NSLocale, NSString;

@protocol NSObject><NSCopying;

@interface AVMutableMetadataItem : AVMetadataItem

{
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) CDStruct_1b6d18a9 duration;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) id <NSObject><NSCopying> value;
@property (copy, nonatomic) NSDictionary *extraAttributes;

+ (id)metadataItem;
+ (id)keyPathsForValuesAffectingIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)key;
- (id)languageCode;
- (id)startDate;
- (void)setKey:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)keySpace;
- (void)setKeySpace:(id)arg1;

@end
