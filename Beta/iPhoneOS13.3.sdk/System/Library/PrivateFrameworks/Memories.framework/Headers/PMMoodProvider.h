/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, VEKProduction;

@protocol PMEditProviderDelegate;

@interface PMMoodProvider : NSObject

{
    VEKProduction *_production;
    id <PMEditProviderDelegate> _delegate;
    NSMutableArray *_blueprints;
    NSArray *_blueprintNames;
}

@property (retain, nonatomic) NSMutableArray *blueprints;
@property (retain, nonatomic) NSArray *blueprintNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;
@property (nonatomic) unsigned long long selectedIndex;

- (unsigned long long)numberOfItems;
- (id)initWithProduction:(id)arg1;
- (id)displayNameForIndex:(unsigned long long)arg1;
- (void)willBeginScrolling;
- (void)setCustomBlueprint:(id)arg1;
- (id)customBlueprint;

@end
