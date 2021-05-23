/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSASAlbum, NSString;

@protocol NSObject;

@interface MSASPersonModelItem : NSObject

{
    int _errorCount;
    MSASAlbum *_album;
    NSString *_albumGUID;
    id <NSObject> _object;
}

@property (nonatomic) int errorCount;
@property (retain, nonatomic) MSASAlbum *album;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) id <NSObject> object;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
