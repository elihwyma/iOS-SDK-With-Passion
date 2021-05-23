/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaRemoteEntityTranslator;

@interface _MPMediaRemoteEntityRelationshipTranslator : NSObject

{
    Class _relationshipModelClass;
}

@property (nonatomic) Class relationshipModelClass;
@property (nonatomic, readonly) MPMediaRemoteEntityTranslator *entityTranslator;

@end
