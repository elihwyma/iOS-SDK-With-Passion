/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSUUID;

@interface UISUIActivityExtensionItemDataRequest : NSObject

{
    _Bool _wantsThumbnailItemData;
    _Bool _wantsAttachmentURLItemData;
    _Bool _isAirDropActivity;
    _Bool _activitySupportsPromiseURLs;
    _Bool _sourceAppIsManaged;
    Class _classForPreparingExtensionItemData;
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    long long _maxPreviews;
    NSString *_extensionIdentifier;
    NSDictionary *_activitySpecificMetadata;
    struct CGSize _thumbnailSize;
}

@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSString *activityType;
@property (nonatomic) struct CGSize thumbnailSize;
@property (nonatomic) NSString *extensionIdentifier;
@property (nonatomic) _Bool isAirDropActivity;
@property (nonatomic) long long maxPreviews;
@property (nonatomic) long long activityCategory;
@property (nonatomic) _Bool wantsThumbnailItemData;
@property (nonatomic) _Bool wantsAttachmentURLItemData;
@property (nonatomic) _Bool activitySupportsPromiseURLs;
@property (retain, nonatomic) NSDictionary *activitySpecificMetadata;
@property (nonatomic) _Bool sourceAppIsManaged;
@property (nonatomic, readonly) Class classForPreparingExtensionItemData;

+ (_Bool)supportsSecureCoding;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 sourceAppIsManaged:(_Bool)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithClassForPreparingExtensionItemData:(Class)arg1;

@end
