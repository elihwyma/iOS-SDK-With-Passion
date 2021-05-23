/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SCNNode;

@interface PKPeerPayment3DCharacter : NSObject

{
    NSString *_character;
    SCNNode *_node;
}

@property (retain, nonatomic) NSString *character;
@property (retain, nonatomic) SCNNode *node;

+ (id)characterWithCharacter:(id)arg1 node:(id)arg2;

@end
