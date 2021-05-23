/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CompassImageNode : NSObject

{
    CompassImageNode *_leftChild;
    CompassImageNode *_rightChild;
    NSString *_imageKey;
    struct CGRect _rect;
}

@property (retain, nonatomic) CompassImageNode *leftChild;
@property (retain, nonatomic) CompassImageNode *rightChild;
@property (nonatomic) struct CGRect rect;
@property (copy, nonatomic) NSString *imageKey;

- (id)insertImageWithSize:(struct CGSize)arg1 key:(id)arg2;

@end
