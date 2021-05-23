/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLMigrationServiceOptions : NSObject

{
    unsigned char _taskToInterrupt;
    unsigned short _option;
    NSString *_clientBundleId;
    NSString *_suggestedDestinationName;
}

@property (readonly) NSString *clientBundleId;
@property (copy) NSString *suggestedDestinationName;
@property unsigned short option;
@property (nonatomic) unsigned char taskToInterrupt;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isPMSOption:(unsigned short)arg1;

@end
