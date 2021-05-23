/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKColumnCollectionElement : IKViewElement

{
    NSArray *_columns;
}

@property (retain, nonatomic, readonly) NSArray *columns;

- (id)applyUpdatesWithElement:(id)arg1;

@end
