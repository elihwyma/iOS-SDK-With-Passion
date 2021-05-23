/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface PHFaceprint : NSObject

{
    long long _faceprintVersion;
    NSData *_faceprintData;
}

@property (nonatomic, readonly) long long faceprintVersion;
@property (retain, nonatomic, readonly) NSData *faceprintData;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2;

@end
