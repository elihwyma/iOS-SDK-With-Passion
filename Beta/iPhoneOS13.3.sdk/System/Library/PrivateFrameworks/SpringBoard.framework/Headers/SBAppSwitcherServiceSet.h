/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <Swift>

{
    NSMutableArray *_services;
}

@property (nonatomic, readonly) NSMutableArray *services;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)addService:(id)arg1;
- (void)removeService:(id)arg1;
- (id)appLayouts;
- (id)serviceBundleIdentifiers;
- (id)serviceAtIndex:(unsigned long long)arg1;
- (id)initWithServices:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)serviceForBundleIdentifier:(id)arg1;

@end
