/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBMultiplexedSpotlightDelegate;

@interface SBSpotlightDelegateManager : NSObject <Swift>

{
    id <SBMultiplexedSpotlightDelegate> _delegates[3];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)activeDelegate;
- (void)dismissSearchView;
- (void)_modifyDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)setSpotlightDelegate:(id)arg1 forLevel:(unsigned long long)arg2;
- (void)removeSpotlightDelegateForLevel:(unsigned long long)arg1;

@end
