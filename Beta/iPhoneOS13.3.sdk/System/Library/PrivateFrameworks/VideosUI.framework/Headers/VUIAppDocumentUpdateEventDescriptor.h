/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEventDescriptor : NSObject <Swift>

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

+ (id)entitlements;
+ (id)settings;
+ (id)restrictions;
+ (id)favorites;
+ (id)purchases;
+ (id)preferredVideoFormat;
+ (id)accountChanged;
+ (id)appDidBecomeActive;
+ (id)playActivity;
+ (id)upNext;
+ (id)removeFromPlayHistory;
+ (id)utsk;
+ (id)postPlay;
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
- (id)initWithEventType:(unsigned long long)arg1;

@end
