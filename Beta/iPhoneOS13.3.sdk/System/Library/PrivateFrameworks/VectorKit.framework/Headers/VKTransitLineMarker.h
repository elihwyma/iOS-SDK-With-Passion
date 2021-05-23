/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOMapItemIdentifier, NSString;

@interface VKTransitLineMarker : NSObject

{
    GEOMapItemIdentifier *_identifier;
    NSString *_shieldText;
    NSString *_shieldLocale;
    long long _shieldType;
    CDStruct_83984b6f _shieldColor;
    NSString *_labelText;
    NSString *_labelLocale;
    void *_transitLinkID;
}

@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldLocale;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) CDStruct_83984b6f shieldColor;
@property (nonatomic, readonly) NSString *labelText;
@property (nonatomic, readonly) NSString *labelLocale;
@property (nonatomic, readonly) void *transitLinkID;

+ (id)markerWithFeature:(CDStruct_5be08681 *)arg1 transitLink:(const CDStruct_cb3d236a *)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithFeature:(CDStruct_5be08681 *)arg1 transitLink:(const CDStruct_cb3d236a *)arg2;

@end
