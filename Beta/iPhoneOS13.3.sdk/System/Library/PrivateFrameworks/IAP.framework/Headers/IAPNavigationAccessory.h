/*
 Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject

{
    _Bool __wasFoundInLastUpdate;
    unsigned long long _identifier;
    NSSet *_components;
}

@property _Bool _wasFoundInLastUpdate;
@property unsigned long long identifier;
@property (retain) NSSet *components;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDict:(id)arg1;
- (_Bool)requestedSourceNameForAnyComponent;
- (_Bool)requestedSourceSupportsRouteGuidanceForAnyComponent;

@end
