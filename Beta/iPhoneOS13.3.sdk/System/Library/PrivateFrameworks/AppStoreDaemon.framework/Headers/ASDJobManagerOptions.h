/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@interface ASDJobManagerOptions : NSObject <Swift>

{
    _Bool _shouldFilterExternalOriginatedDownloads;
    _Bool _shouldReportDownloadProgress;
    NSString *_persistenceIdentifier;
}

@property (nonatomic) _Bool shouldReportDownloadProgress;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (nonatomic) _Bool shouldFilterExternalOriginatedDownloads;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
