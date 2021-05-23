/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SMBFileAllInformation : NSObject

{
    NSString *_name;
    struct smbfattr _attributes;
}

@property struct smbfattr attributes;
@property (copy) NSString *name;

@end
