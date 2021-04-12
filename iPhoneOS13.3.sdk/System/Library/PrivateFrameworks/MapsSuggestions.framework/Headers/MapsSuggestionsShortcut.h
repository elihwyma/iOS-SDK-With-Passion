//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOMapItemStorage, NSArray, NSString, NSUUID;

@interface MapsSuggestionsShortcut : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isHidden;
    long long _type;
    NSString *_identifier;
    NSUUID *_storageIdentifier;
    NSString *_customName;
    struct GEOMapItemStorage _geoMapItem;
    NSString *_originatingAddressString;
    NSArray *_contacts;
}

+ (id)shortcutWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSString *originatingAddressString; // @synthesize originatingAddressString=_originatingAddressString;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(copy, nonatomic) GEOMapItemStorage *geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(copy, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property(copy, nonatomic) NSUUID *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToShortcut:(id)arg1;
- (id)description;
- (id)data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (BOOL)_isPlaceholder;
@property(readonly, nonatomic) BOOL isSetupPlaceholder;
@property(readonly, nonatomic) BOOL isBackedPlaceholder;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)_name;
- (id)_originalName;
- (id)initSetupPlaceholderOfType:(long long)arg1;
- (id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 customName:(id)arg3;
- (id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 originatingAddress:(id)arg3 customName:(id)arg4;
- (id)initWithGEOMapItem:(struct GEOMapItemStorage )arg1 customName:(id)arg2;
- (id)initWithType:(long long)arg1 geoMapItem:(struct GEOMapItemStorage )arg2 customName:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(struct GEOMapItemStorage )arg3 customName:(id)arg4;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(struct GEOMapItemStorage )arg3 customName:(id)arg4 contacts:(id)arg5 isHidden:(BOOL)arg6 originatingAddress:(id)arg7;
- (BOOL)isEqualToPinnedPlace:(id)arg1;
- (int)pinnedStorageType;
- (id)initWithPinnedPlace:(id)arg1;

@end

