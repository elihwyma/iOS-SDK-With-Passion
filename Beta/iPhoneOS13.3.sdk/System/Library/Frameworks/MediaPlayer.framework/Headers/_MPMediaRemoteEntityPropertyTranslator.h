/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface _MPMediaRemoteEntityPropertyTranslator : NSObject

{
    CDUnknownBlockType _valueTransformer;
    CDUnknownBlockType _artworkValueTransformer;
}

@property (copy, nonatomic) CDUnknownBlockType valueTransformer;
@property (copy, nonatomic) CDUnknownBlockType artworkValueTransformer;

@end
