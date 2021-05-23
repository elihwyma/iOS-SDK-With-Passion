/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface RPFileTransferProgress : NSObject

{
    int _linkType;
    int _type;
    double _bytesPerSecond;
    double _remainingSeconds;
    double _compressionRate;
    NSString *_currentFilename;
    NSError *_error;
    long long _transferredByteCount;
    long long _totalByteCount;
    long long _transferredFileCount;
    long long _totalFileCount;
}

@property (nonatomic) double bytesPerSecond;
@property (nonatomic) double remainingSeconds;
@property (nonatomic) double compressionRate;
@property (copy, nonatomic) NSString *currentFilename;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) int linkType;
@property (nonatomic) long long transferredByteCount;
@property (nonatomic) long long totalByteCount;
@property (nonatomic) long long transferredFileCount;
@property (nonatomic) long long totalFileCount;
@property (nonatomic) int type;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;

@end
