/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSDictionary, VUIAppDocumentUpdateEventDescriptor;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEvent : NSObject <Swift>

{
    VUIAppDocumentUpdateEventDescriptor *_descriptor;
}

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)entitlements;
+ (id)settings;
+ (id)restrictions;
+ (id)favorites;
+ (id)purchases;
+ (id)preferredVideoFormat;
+ (id)accountChanged;
+ (id)appDidBecomeActive;
+ (id)playActivity;
+ (id)removeFromPlayHistory;
+ (id)utsk;
+ (id)playHistoryUpdated;
+ (id)clearPlayHistory;
+ (id)appRefresh;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)coalescedEvent:(id)arg1;

@end
