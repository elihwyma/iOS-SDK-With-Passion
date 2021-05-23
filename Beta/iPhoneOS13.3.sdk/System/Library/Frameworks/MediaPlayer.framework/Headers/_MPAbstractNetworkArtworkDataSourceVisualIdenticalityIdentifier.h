/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MPAbstractNetworkArtworkDataSourceVisualIdenticalityIdentifier : NSObject

{
    NSString *_artworkIdentifier;
}

@property (copy, nonatomic) NSString *artworkIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;

@end
