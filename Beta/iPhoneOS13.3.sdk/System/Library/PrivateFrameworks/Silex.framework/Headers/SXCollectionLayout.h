/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SXCollectionLayout : NSObject

{
    double _spaceBetweenRows;
    NSArray *_rowsLayouts;
}

@property (nonatomic) double spaceBetweenRows;
@property (retain, nonatomic) NSArray *rowsLayouts;

- (id)description;

@end
