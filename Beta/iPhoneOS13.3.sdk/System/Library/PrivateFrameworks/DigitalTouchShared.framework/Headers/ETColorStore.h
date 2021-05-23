/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface ETColorStore : NSObject

{
    NSMutableArray *_colors;
    unsigned long long _selectedColorIndex;
    _Bool _selectedIndexLoaded;
}

@property (nonatomic) unsigned long long selectedColorIndex;
@property (nonatomic, readonly) NSArray *colors;

+ (id)defaultStore;

- (id)init;
- (void)dealloc;
- (id)_colors;
- (void)defaultsChanged:(id)arg1;
- (void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)addDefaultsObserver;

@end
