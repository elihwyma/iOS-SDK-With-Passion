/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf

{
    _Bool _useImageAsTitle;
    PKDiscoveryCallToAction *_callToAction;
}

@property (nonatomic, readonly) PKDiscoveryCallToAction *callToAction;
@property (nonatomic, readonly) _Bool useImageAsTitle;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end
