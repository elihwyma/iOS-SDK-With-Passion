/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSString, NSURL;

@interface FigCaptureRecordingSettings : NSObject <Swift>

{
    long long _settingsID;
    NSURL *_outputURL;
    NSString *_outputFileType;
    CDStruct_1b6d18a9 _maxDuration;
    long long _maxFileSize;
    long long _minFreeDiskSpaceLimit;
}

@property (nonatomic) long long settingsID;
@property (copy, nonatomic) NSURL *outputURL;
@property (copy, nonatomic) NSString *outputFileType;
@property (nonatomic) CDStruct_1b6d18a9 maxDuration;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
