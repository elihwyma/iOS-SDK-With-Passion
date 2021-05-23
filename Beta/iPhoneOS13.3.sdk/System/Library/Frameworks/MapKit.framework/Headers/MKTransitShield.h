/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MKTransitShield : NSObject

{
    long long _shieldType;
    NSString *_shieldText;
    NSString *_shieldColorString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldColorString;

- (id)initWithShieldType:(long long)arg1 text:(id)arg2 color:(id)arg3;

@end
