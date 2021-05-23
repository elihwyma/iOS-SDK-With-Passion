/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject

{
    _Bool _useCellular;
    _Bool _powerRequired;
    double _bitRate;
    NSString *_videoType;
    unsigned long long _mediaAssetType;
}

@property (nonatomic, readonly) _Bool useCellular;
@property (nonatomic, readonly) _Bool powerRequired;
@property (nonatomic, readonly) double bitRate;
@property (nonatomic, readonly) NSString *videoType;
@property (nonatomic, readonly) unsigned long long mediaAssetType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (id)initWithDictionary:(id)arg1;

@end
