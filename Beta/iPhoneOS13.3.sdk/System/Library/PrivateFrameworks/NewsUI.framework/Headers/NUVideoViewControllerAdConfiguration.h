/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@interface NUVideoViewControllerAdConfiguration : NSObject <Swift>

{
    _Bool _adsEnabled;
    _Bool _allowLeadingAdSlot;
}

@property (nonatomic, readonly, getter=areAdsEnabled) _Bool adsEnabled;
@property (nonatomic, readonly) _Bool allowLeadingAdSlot;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdsEnabled:(_Bool)arg1 allowLeadingAdSlot:(_Bool)arg2;

@end
