/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXCollectionRowLayout : NSObject

{
    unsigned long long _intendedComponentsPerRow;
    unsigned long long _componentsPerRow;
    double _leftMargin;
    double _rightMargin;
    double _componentWidth;
    double _spaceBetweenComponents;
}

@property (nonatomic) unsigned long long intendedComponentsPerRow;
@property (nonatomic) unsigned long long componentsPerRow;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double componentWidth;
@property (nonatomic) double spaceBetweenComponents;

- (id)description;

@end
