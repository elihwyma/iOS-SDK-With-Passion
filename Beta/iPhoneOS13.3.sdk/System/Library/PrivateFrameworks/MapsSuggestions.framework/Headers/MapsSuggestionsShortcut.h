/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class GEOMapItemStorage, NSArray, NSString, NSUUID;

@interface MapsSuggestionsShortcut : NSObject

{
    _Bool _isHidden;
    long long _type;
    NSString *_identifier;
    NSUUID *_storageIdentifier;
    NSString *_customName;
    struct GEOMapItemStorage *_geoMapItem;
    NSString *_originatingAddressString;
    NSArray *_contacts;
}

@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *storageIdentifier;
@property (copy, nonatomic) NSString *customName;
@property (copy, nonatomic) GEOMapItemStorage *geoMapItem;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic) _Bool isHidden;
@property (copy, nonatomic) NSString *originatingAddressString;
@property (nonatomic, readonly) _Bool isBackedPlaceholder;
@property (nonatomic, readonly) _Bool isSetupPlaceholder;

+ (_Bool)supportsSecureCoding;
+ (id)shortcutWithData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (_Bool)_isPlaceholder;
- (id)_originalName;
- (void)addContact:(id)arg1;
- (void)removeContact:(id)arg1;
- (id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 originatingAddress:(id)arg3 customName:(id)arg4;
- (_Bool)isEqualToShortcut:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(struct GEOMapItemStorage *)arg3 customName:(id)arg4;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 geoMapItem:(struct GEOMapItemStorage *)arg3 customName:(id)arg4 contacts:(id)arg5 isHidden:(_Bool)arg6 originatingAddress:(id)arg7;
- (id)initWithType:(long long)arg1 geoMapItem:(struct GEOMapItemStorage *)arg2 customName:(id)arg3;
- (id)initWithGEOMapItem:(struct GEOMapItemStorage *)arg1 customName:(id)arg2;
- (id)initBackedPlaceholderWithType:(long long)arg1 identifier:(id)arg2 customName:(id)arg3;
- (id)initSetupPlaceholderOfType:(long long)arg1;
- (id)initWithPinnedPlace:(id)arg1;
- (int)pinnedStorageType;
- (_Bool)isEqualToPinnedPlace:(id)arg1;

@end
