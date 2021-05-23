/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationSource.h>

@class NSArray, NSLayoutRect;

@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface _NSLayoutRectObservable : NSObservationSource

{
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id <NSLayoutItem> _layoutItem;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;

- (void)dealloc;
- (id)initWithRect:(id)arg1 inLayoutItem:(id)arg2;
- (void)_reflectUpdatedRect:(id)arg1;

@end
