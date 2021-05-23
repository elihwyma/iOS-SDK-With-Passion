/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface MSVSegmentedCodingPackage : NSObject

{
    _Bool _needsInfoDictionaryUpdate;
    NSURL *_packageURL;
    Class _archivedClass;
    NSMutableDictionary *_segmentEncoderMap;
    NSMutableDictionary *_infoDictionary;
}

@property (copy, nonatomic) NSURL *packageURL;
@property (retain, nonatomic) NSMutableDictionary *segmentEncoderMap;
@property (retain, nonatomic) NSMutableDictionary *infoDictionary;
@property (retain, nonatomic) Class archivedClass;
@property (nonatomic, readonly) NSDictionary *allVersions;

+ (id)packageTypeIdentifier;

- (id)initWithURL:(id)arg1;
- (void)reset;
- (_Bool)deleteWithError:(id *)arg1;
- (id)encoderForSegment:(id)arg1 version:(long long)arg2;
- (id)decodersWithError:(id *)arg1;
- (id)coderTypeForSegment:(id)arg1;
- (_Bool)writeWithError:(id *)arg1;
- (void)setNeedsInfoDictionaryUpdate;
- (_Bool)saveWithError:(id *)arg1;

@end
