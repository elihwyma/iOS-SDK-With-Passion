/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLSCachedContact : NSObject

{
    _Bool _hasPicture;
    NSString *_contactIdentifier;
    NSString *_classifiedPersonLocalIdentifierWithFaceModelID;
    double _updateTimestamp;
}

@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) _Bool hasPicture;
@property (retain, nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic) double updateTimestamp;

- (id)init;
- (id)description;

@end
