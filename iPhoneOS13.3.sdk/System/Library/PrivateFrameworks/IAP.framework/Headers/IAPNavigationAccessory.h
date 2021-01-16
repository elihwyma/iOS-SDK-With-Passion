//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject
{
    BOOL __wasFoundInLastUpdate;
    NSUInteger _identifier;
    NSSet *_components;
}

@property BOOL _wasFoundInLastUpdate; // @synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate;
@property(retain) NSSet *components; // @synthesize components=_components;
@property NSUInteger identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (BOOL)requestedSourceNameForAnyComponent;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
