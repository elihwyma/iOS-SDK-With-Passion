/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SUVariableCellConfigurationCache : NSObject

{
    NSMutableDictionary *_caches;
    id _cellContext;
    double _tableHeight;
}

@property (nonatomic, readonly) NSArray *caches;
@property (retain, nonatomic) id cellContext;

- (void)dealloc;
- (void)reset;
- (void)resetLayoutCaches;
- (id)cacheForClass:(Class)arg1;
- (id)initWithTableHeight:(double)arg1;

@end
