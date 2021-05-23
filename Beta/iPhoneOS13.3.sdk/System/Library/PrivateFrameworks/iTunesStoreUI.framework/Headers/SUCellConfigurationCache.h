/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject

{
    id _cellContext;
    NSMutableArray *_configurations;
}

@property (retain, nonatomic) id cellContext;

- (void)dealloc;
- (void)reset;
- (void)resetLayoutCaches;
- (id)configurationForRow:(unsigned long long)arg1;
- (id)initWithClass:(Class)arg1 tableHeight:(double)arg2;

@end
