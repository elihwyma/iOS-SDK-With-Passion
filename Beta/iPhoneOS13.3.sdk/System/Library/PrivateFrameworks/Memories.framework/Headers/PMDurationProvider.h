/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, VEKProduction;

@protocol PMEditProviderDelegate;

@interface PMDurationProvider : NSObject

{
    VEKProduction *_production;
    id <PMEditProviderDelegate> _delegate;
    unsigned long long _selectedIndex;
    double _maxDuration;
    double _customDuration;
    double _currentDuration;
    NSArray *_localizedDurations;
}

@property (retain, nonatomic) NSArray *localizedDurations;
@property (nonatomic) double currentDuration;
@property (nonatomic, readonly) double maxDuration;
@property (nonatomic) double customDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;
@property (nonatomic) unsigned long long selectedIndex;

- (unsigned long long)numberOfItems;
- (void)updateWithResult:(id)arg1;
- (void)setCustomDuration:(double)arg1 andEdit:(_Bool)arg2;
- (id)initWithProduction:(id)arg1;
- (id)displayNameForIndex:(unsigned long long)arg1;
- (void)willBeginScrolling;
- (void)updateLocalizedNames;

@end
