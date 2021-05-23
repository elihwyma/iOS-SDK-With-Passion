/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXColumnLayout, UITraitCollection;

@interface SXLayoutOptions : NSObject

{
    SXColumnLayout *_columnLayout;
    struct CGSize _viewportSize;
    UITraitCollection *_traitCollection;
    NSString *_contentSizeCategory;
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
    _Bool _testing;
    unsigned long long _viewingLocation;
    double _contentScaleFactor;
}

@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) long long bundleSubscriptionStatus;
@property (nonatomic, readonly) long long channelSubscriptionStatus;
@property (nonatomic, readonly) _Bool testing;
@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly) double contentScaleFactor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithColumnLayout:(id)arg1 viewportSize:(struct CGSize)arg2 traitCollection:(id)arg3 contentSizeCategory:(id)arg4 bundleSubscriptionStatus:(long long)arg5 channelSubscriptionStatus:(long long)arg6 testing:(_Bool)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9;
- (unsigned long long)diffWithLayoutOptions:(id)arg1;

@end
